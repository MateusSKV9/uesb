/** @type {HTMLCanvasElement} */
const canvas = document.querySelector("#canvas");

/** @type {CanvasRenderingContext2D} */
const ctx = canvas.getContext("2d");

ctx.fillStyle = "red";
ctx.fillText("TEXTO SEM CONTORNO!", 50, 50);

ctx.strokeStyle = "red"; // cor do contorno
ctx.lineWidth = 1; // largura do contorno
ctx.strokeText("TEXTO COM CONTORNO", 50, 75);
