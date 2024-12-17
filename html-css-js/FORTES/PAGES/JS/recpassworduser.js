function saveNewPassword() {
    const email = document.getElementById('email').value;
    const newPassword = document.getElementById('new-password').value;
    const confirmPassword = document.getElementById('confirm-password').value;

    if (newPassword !== confirmPassword) {
        alert('As senhas não coincidem.');
        return;
    }

    localStorage.setItem('email', email);
    localStorage.setItem('password', newPassword);

    window.location.href = 'loginuser.html';
}

function goBack() {
    window.location.href = 'loginuser.html';
}