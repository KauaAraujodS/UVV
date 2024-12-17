function loadData() {
    document.getElementById('username').value = localStorage.getItem('username') || '';
    document.getElementById('password').value = localStorage.getItem('password') || '';
}

function goBack() {
    window.location.href = 'cadastro.html';
}

/*function loginUser() {
    const username = document.getElementById('username').value;
    const password = document.getElementById('password').value;


    if (username && password) {
        window.location.href = 'inicio-instituicao.html';
    } else {
        alert('Por favor, preencha todos os campos.');
    }
} */
