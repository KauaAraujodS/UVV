function storeData() {
    localStorage.setItem('username', document.getElementById('username').value);
    localStorage.setItem('password', document.getElementById('password').value);
}

function goBack() {
    window.location.href = 'telainicial.html';
}
