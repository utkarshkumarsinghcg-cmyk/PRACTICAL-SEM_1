
const IMG = document.getElementById("IMG");
const BTN = document.getElementById("BTN");


BTN.addEventListener("click", function () {
    IMG.style.display = "none";
    BTN.textContent = "Show Image (Double Click)";
});


BTN.addEventListener("dblclick", function () {
    IMG.style.display = "flex";
    BTN.textContent = "Hide Image (Single Click)";
});





