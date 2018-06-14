/*
	[0] Zamawiający: <br><input type="text" name="podsuma" style="width: 95%"><br><br>
	[1] Rodzaj: <br><input type="text" name="podsuma" style="width: 95%"><br><br>
	[2] Rok i miesiąc urodzenia: <br><input type="text" name="podsuma" style="width: 95%"><br><br>
	[3] Suma opłat za wybrane usługi: <br><input type="text" name="podsuma" style="width: 95%"><br><br>
	[4] Uwagi: <br><input type="text" name="podsuma" style="width: 95%"><br><br>
*/

function sprawdz(){
	//zamawiajacy
	document.getElementsByName('podsuma')[0].value=document.getElementsByName('nazwa')[0].value;
	
	//rodzaj 
	var r=document.getElementsByName('rodzaj');		
	var firmapryw;
	for (i=0;i<r.length;i++){
		if (r[i].checked){
			firmapryw=r[i].value;
		}
	}
	document.getElementsByName('podsuma')[1].value=firmapryw;
	
	//rok i mc
	document.getElementsByName('podsuma')[2].value=document.getElementsByName('rok')[0].value+"/"+document.getElementsByName('mc')[0].value;
	
	//suma oplat
	var usl=document.getElementsByName('wariant');
	var suma=0;
	for (i=0;i<usl.length;i++){
		if (usl[i].checked){
			suma+=parseInt(usl[i].value);
		}
	}
	document.getElementsByName('podsuma')[3].value=suma;
	
	//uwagi
	document.getElementsByName('podsuma')[4].value=document.getElementsByName('uwagi')[0].value;
}


