class EVOR_dlg_funds {
	idd = 2005;
	movingEnable = false;
	onLoad = "uiNamespace setVariable [""EVOR_dlg_funds"",_this select 0];";
	onUnload = "uiNamespace setVariable [""EVOR_dlg_funds"",nil];";

	transferScoreValues[] = {1,5,10,20,50,75,100};

	class controls {
		// Main headers
		class title: RscStructuredText {
			idc = 1000;
			colorbackground[] = {0.77,0.51,0.08,0.8};
			x = safezoneW * 0.300 + safezoneX;
			y = safezoneH * 0.175 + safezoneY;
			w = safezoneW * 0.400;
			h = safezoneH * 0.020;
			onLoad = "(_this select 0) ctrlSetStructuredText parseText format [""<t align = 'left'>КЕРУВАННЯ ФIНАНСАМИ</t><t align = 'right'>%1</t>"",profileName];";
		};
		class score: RscStructuredText {
			idc = 1001;
			colorbackground[] = {0,0,0,1};
			x = safezoneW * 0.300 + safezoneX;
			y = safezoneH * 0.200 + safezoneY;
			w = safezoneW * 0.400;
			h = safezoneH * 0.020;
			onLoad = "_this spawn EVOR_fnc_dlgDisplayScore;";
		};
		class back: IGUIBack {
			idc = 1002;
			colorbackground[] = {0,0,0,0.6};
			x = safezoneW * 0.300 + safezoneX;
			y = safezoneH * 0.225 + safezoneY;
			w = safezoneW * 0.400;
			h = safezoneH * 0.400;
		};
		class headPlayers: RscText {
			idc = 1003;
			text = "ГРАВЦI";
			x = safezoneW * 0.300 + safezoneX;
			y = safezoneH * 0.225 + safezoneY;
			w = safezoneW * 0.125;
			h = safezoneH * 0.020;
			colorbackground[] = {0,0,0,1};
		};
		class headFunds: RscText {
			idc = 1004;
			text = "ФIНАНСИ";
			x = safezoneW * 0.425 + safezoneX;
			y = safezoneH * 0.225 + safezoneY;
			w = safezoneW * 0.075;
			h = safezoneH * 0.020;
			colorbackground[] = {0,0,0,1};
		};
		class headTransfer: RscText {
			idc = 1005;
			text = "БАЛАНС";
			x = safezoneW * 0.500 + safezoneX;
			y = safezoneH * 0.225 + safezoneY;
			w = safezoneW * 0.200;
			h = safezoneH * 0.020;
			colorbackground[] = {0,0,0,1};
		};
		class headSources: RscText {
			idc = 1006;
			text = "ДЖЕРЕЛА НАДХОДЖЕННЯ";
			x = safezoneW * 0.500 + safezoneX;
			y = safezoneH * 0.425 + safezoneY;
			w = safezoneW * 0.200;
			h = safezoneH * 0.020;
			colorbackground[] = {0,0,0,1};
		};

		// Player ListNBox
		class listNBox: RscListNbox {
			idc = 1007;
			x = safezoneW * 0.300 + safezoneX;
			y = safezoneH * 0.250 + safezoneY;
			w = safezoneW * 0.200;
			h = safezoneH * 0.375;
			columns[] = {-0.01,0.615};
			onLoad = "_this spawn EVOR_fnc_dlgFundsLnbFill;";
			onLBSelChanged = "_this call EVOR_fnc_dlgFundsLnbChange;";
		};

		// Amount combobox
		class combo: RscCombo {
			idc = 1008;
			x = safezoneW * 0.500 + safezoneX;
			y = safezoneH * 0.250 + safezoneY;
			w = safezoneW * 0.200;
			h = safezoneH * 0.020;
			onLoad = "_this call EVOR_fnc_dlgFundsCombo;";
		};

		// Score displays
		class textInf: RscStructuredText {
			idc = 1009;
			text = "<t align='left'>Пiхота: </t><t align = 'right'>1</t>";
			x = safezoneW * 0.500 + safezoneX;
			y = safezoneH * 0.450 + safezoneY;
			w = safezoneW * 0.200;
			h = safezoneH * 0.020;
		};
		class textVeh: RscStructuredText {
			idc = 1010;
			text = "<t align='left'>Транспорт: </t><t align = 'right'>2</t>";
			x = safezoneW * 0.500 + safezoneX;
			y = safezoneH * 0.475 + safezoneY;
			w = safezoneW * 0.200;
			h = safezoneH * 0.020;
		};
		class textArm: RscStructuredText {
			idc = 1011;
			text = "<t align='left'>Броня: </t><t align = 'right'>3</t>";
			x = safezoneW * 0.500 + safezoneX;
			y = safezoneH * 0.500 + safezoneY;
			w = safezoneW * 0.200;
			h = safezoneH * 0.020;
		};
		class textAir: RscStructuredText {
			idc = 1012;
			text = "<t align='left'>Повiтряннi судна: </t><t align = 'right'>5</t>";
			x = safezoneW * 0.500 + safezoneX;
			y = safezoneH * 0.525 + safezoneY;
			w = safezoneW * 0.200;
			h = safezoneH * 0.020;
		};
		class textCap: RscStructuredText {
			idc = 1013;
			x = safezoneW * 0.500 + safezoneX;
			y = safezoneH * 0.550 + safezoneY;
			w = safezoneW * 0.200;
			h = safezoneH * 0.020;
			onLoad = "(_this select 0) ctrlSetStructuredText parseText format [""<t align='left'>Захоплення: </t><t align = 'right'>%1</t>"",EVOR_var_ScoreObjCap];";
		};
		class textRT: RscStructuredText {
			idc = 1014;
			x = safezoneW * 0.500 + safezoneX;
			y = safezoneH * 0.575 + safezoneY;
			w = safezoneW * 0.200;
			h = safezoneH * 0.020;
			onLoad = "(_this select 0) ctrlSetStructuredText parseText format [""<t align='left'>Радiовежа: </t><t align = 'right'>%1</t>"",EVOR_var_ScoreObjRT];";
		};
		class textAssist: RscStructuredText {
			idc = 1015;
			x = safezoneW * 0.500 + safezoneX;
			y = safezoneH * 0.600 + safezoneY;
			w = safezoneW * 0.200;
			h = safezoneH * 0.020;
			onLoad = "(_this select 0) ctrlSetStructuredText parseText format [""<t align='left'>Надання допомоги при атацi з повiтря: </t><t align = 'right'>%1</t>"",EVOR_var_ScoreKillAssist];";
		};

		// Buttons
		class buttonTransfer: RscButton {
			idc = 1016;
			text = "ПЕРЕВЕСТИ";
			x = safezoneW * 0.505 + safezoneX;
			y = safezoneH * 0.630 + safezoneY;
			w = safezoneW * 0.095;
			h = safezoneH * 0.020;
			onButtonClick = "_this call EVOR_fnc_dlgFundsTransfer;";
			onLoad = "(_this select 0) ctrlEnable false;";
		};
		class buttonClose: RscButton {
			idc = 1017;
			text = "BACK";
			x = safezoneW * 0.605 + safezoneX;
			y = safezoneH * 0.630 + safezoneY;
			w = safezoneW * 0.095;
			h = safezoneH * 0.020;
			onButtonClick = "(ctrlParent (_this select 0)) closeDisplay 0;";
		};
	};
};
