// ————————————————————

/** @type {HTMLCanvasElement} */
const canvas = document.querySelector("#canvas");

/** @type {CanvasRenderingContext2D} */
const ctx = canvas.getContext("2d");

ctx.fillStyle = "red";

//           X   Y    W    H
ctx.fillRect(50, 50, 200, 200);
