function Zamien(){
	var teksta=document.getElementById('ida').value;
	var tekstb=document.getElementById('idb').value;
	//zamiana a<->b
	var rob=teksta; //w rob mamy tekst a
	teksta=tekstb; //w a mamy b
	tekstb=rob; //w b jest rob (a w rob a)
	
	//ponowne przypisanie wartoœci polom formularza
	document.getElementById('ida').value=teksta;
	document.getElementById('idb').value=tekstb;
	
	return true;
}

function ZamienLepsze(){
	var rob=document.getElementById('ida').value;
	document.getElementById('ida').value=document.getElementById('idb').value;
	document.getElementById('idb').value=rob;
	
	//span
	document.getElementById('idspan').innerHTML=document.
	getElementById('ida').value+" "+document.getElementById('idb').value;
	
	
	return true;
}



