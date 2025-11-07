document.addEventListener("DOMContentLoaded", () => {
	const result = document.querySelector("#result");
	const btnIdentify = document.querySelector("#btn-identify");
	result.textContent = "...";

	btnIdentify.addEventListener("click", () => {
		const inputIdade = document.querySelector("#iAge");
		const idade = Number(inputIdade.value);
		let textResult = "";
		inputIdade.classList.remove("error");

		if (idade == "" || isNaN(idade)) {
			inputIdade.value = "";
			inputIdade.placeholder = "Digite uma idade válida...";
			inputIdade.classList.add("error");
			inputIdade.focus();
			return;
		}

		if (idade >= 0 && idade < 15) {
			textResult = "Criança";
		} else if (idade < 30) {
			textResult = "Jovem";
		} else if (idade < 60) {
			textResult = "Adulto";
		} else {
			textResult = "Idoso";
		}

		result.textContent = textResult;
	});
});
