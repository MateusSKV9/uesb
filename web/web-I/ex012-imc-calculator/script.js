document.addEventListener("DOMContentLoaded", () => {
	const btnGenerateForm = document.querySelector("#btn-generate-form");
	btnGenerateForm.addEventListener("click", generateForm);
	const result = document.querySelector("#result");

	function clearForm() {
		const inputs = document.querySelectorAll(".container-inputs input");
		inputs.forEach((input) => input.classList.remove("error"));
		result.textContent = "";
	}

	function generateForm() {
		const body = document.querySelector("body");

		const form = `
			     	<form>
			         <div class="container-inputs">
			           <div class="form-group">
			             <label for="iName">Nome</label>
			             <input placeholder="Digite seu nome" type="text" id="iName" />
			           </div>

			           <div class="form-group">
			             <label for="iHeight">Altura</label>
			             <input placeholder="Digite sua altura em cm" type="number" id="iHeight" />
			           </div>

			           <div class="form-group">
			             <label for="iWeight">Peso</label>
			             <input placeholder="Digite seu em em Kg" type="number" id="iWeight" />
			           </div>
			         </div>

			         <div class="container-buttons">
			           <input id="btn-reset" type="reset" value="Limpar" />
			           <input id="btn-verify" type="button" value="Verificar" />
			         </div>
			       </form>`;

		body.insertAdjacentHTML("beforeend", form);

		if (form) {
			body.removeChild(btnGenerateForm);
			const btnVerify = document.querySelector("#btn-verify");
			const btnReset = document.querySelector("#btn-reset");
			btnVerify.addEventListener("click", calcBodyIndex);
			btnReset.addEventListener("click", clearForm);
		}
	}

	function calcBodyIndex() {
		const inputName = document.querySelector("#iName");
		const inputHeight = document.querySelector("#iHeight");
		const inputWeight = document.querySelector("#iWeight");

		const name = inputName.value;
		const height = Number(inputHeight.value) / 100;
		const weight = Number(inputWeight.value);
		const bodyIndex = weight / (height * height);

		let textResult = "";
		clearForm();
		let success = checkInputs(inputName, inputHeight, inputWeight);

		if (success) {
			if (bodyIndex < 16) {
				textResult = "Baixo peso muito grave";
			} else if (bodyIndex < 16.99) {
				textResult = "Baixo peso grave";
			} else if (bodyIndex < 18.49) {
				textResult = "Baixo peso";
			} else if (bodyIndex < 24.99) {
				textResult = "Peso normal";
			} else if (bodyIndex < 29.99) {
				textResult = "Sobrepeso";
			} else if (bodyIndex < 29.99) {
				textResult = "Obesidade grau I";
			} else if (bodyIndex < 39.99) {
				textResult = "Obesidade grau II";
			} else {
				textResult = "Obesidade grau III";
			}

			result.innerHTML = `<strong>${name}</strong> possui índice de massa corporal igual a <strong>${bodyIndex.toFixed(
				2
			)}</strong>, sendo classificado como: <strong>${textResult}</strong>`;
		}
	}

	function checkInputs(inputName, inputHeight, inputWeight) {
		if (inputName.value.trim() == "") {
			success = false;
			inputName.classList.add("error");
			inputName.focus();
			return;
		}

		if (inputHeight.value <= 0) {
			success = false;
			inputHeight.classList.add("error");
			inputHeight.focus();
			return;
		}

		if (inputWeight.value <= 0) {
			success = false;
			inputWeight.classList.add("error");
			inputWeight.focus();
			return;
		}

		return true;
	}
});
