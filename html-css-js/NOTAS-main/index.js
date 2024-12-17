function enviar(event) {
    event.preventDefault();

    var nome = event.target.nome.value;
    var matricula = event.target.matricula.value;
    var email = event.target.email.value;
    var nota = parseFloat(event.target.nota.value);

    if (!nome || !matricula || !email || isNaN(nota)) {
        alert("Insira os valores obrigatórios!");
        return;
    }

    var aluno = { nome, matricula, email, nota };

    var tr = document.createElement("tr");
    var td_nome = document.createElement("td");
    td_nome.innerHTML = nome;
    var td_matricula = document.createElement("td");
    td_matricula.innerHTML = matricula;
    var td_email = document.createElement("td");
    td_email.innerHTML = email;
    var td_nota = document.createElement("td");
    td_nota.innerHTML = nota;
    var td_situacao = document.createElement("td");

    if (nota < 5) {
        td_nota.style.backgroundColor = "red";
        td_situacao.innerHTML = "Reprovada(o)";
    } else if (nota < 7) {
        td_nota.style.backgroundColor = "orange";
        td_situacao.innerHTML = "Recuperação";
    } else {
        td_nota.style.backgroundColor = "green";
        td_situacao.innerHTML = "Aprovada(o)";
    }

    tr.appendChild(td_nome);
    tr.appendChild(td_matricula);
    tr.appendChild(td_email);
    tr.appendChild(td_nota);
    tr.appendChild(td_situacao);

    document.querySelector("tbody").appendChild(tr);

    localStorage.setItem("aluno", JSON.stringify(aluno));
}
