function loadData() {
    document.getElementById('username').value = localStorage.getItem('username') || '';
    document.getElementById('password').value = localStorage.getItem('password') || '';
    document.getElementById('telefone').value = localStorage.getItem('telefone') || '';
    document.getElementById('telefone2').value = localStorage.getItem('telefone2') || '';
    document.getElementById('cnpjcpf').value = localStorage.getItem('cnpjcpf') || '';
    document.getElementById('bairro').value = localStorage.getItem('bairro') || '';
    document.getElementById('cidade').value = localStorage.getItem('cidade') || '';
    document.getElementById('estado').value = localStorage.getItem('estado') || '';
    document.getElementById('cep').value = localStorage.getItem('cep') || '';
    document.getElementById('area').value = localStorage.getItem('area') || '';
    document.getElementById('descricao').value = localStorage.getItem('descricao') || '';
}

function storeFinalData() {
    localStorage.setItem('telefone', document.getElementById('telefone').value);
    localStorage.setItem('telefone2', document.getElementById('telefone2').value);
    localStorage.setItem('cnpjcpf', document.getElementById('cnpjcpf').value);
    localStorage.setItem('bairro', document.getElementById('bairro').value);
    localStorage.setItem('cidade', document.getElementById('cidade').value);
    localStorage.setItem('estado', document.getElementById('estado').value);
    localStorage.setItem('cep', document.getElementById('cep').value);
    localStorage.setItem('area', document.getElementById('area').value);
    localStorage.setItem('descricao', document.getElementById('descricao').value);

    window.location.href = 'loginuser.html';
}

function goBack() {
    window.location.href = 'cadastro.html';
}