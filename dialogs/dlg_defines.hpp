class RscText {
	deletable = 0;
	fade = 0;
	access = 0;
	type = 0;
	idc = -1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	text = "";
	fixedWidth = 0;
	style = 0;
	shadow = 1;
	colorShadow[] = {0,0,0,0.5};
	font = "PuristaLight";
	sizeEx = "safezoneH*0.02";
	linespacing = 1;
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
};
class RscStructuredText {
	deletable = 0;
	fade = 0;
	access = 0;
	type = 13;
	idc = -1;
	style = 0;
	colorText[] = {1,1,1,1};
	class Attributes {
		font = "PuristaLight";
		color = "#ffffff";
		colorLink = "#D09B43";
		align = "left";
		shadow = 1;
	};
	text = "";
	size = "safezoneH*0.02";
	sizeEx = "safezoneH*0.02";
	shadow = 1;
};
class RscPicture {
	deletable = 0;
	fade = 0;
	access = 0;
	type = 0;
	idc = -1;
	style = 48;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	shadow = 0;
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
};
class RscEdit {
	deletable = 0;
	fade = 0;
	access = 0;
	type = 2;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0.95,0.95,0.95,1};
	colorDisabled[] = {1,1,1,0.25};
	colorSelection[] = {
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",
		1
	};
	autocomplete = "";
	text = "";
	size = 0.2;
	style = "0x00 + 0x40";
	font = "PuristaLight";
	shadow = 2;
	sizeEx = "safezoneH*0.02";
	canModify = 1;
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
};
class RscCombo {
	deletable = 0;
	fade = 0;
	access = 0;
	type = 4;
	rowHeight = safeZoneH * 0.02;
	colorSelect[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,1};
	colorScrollbar[] = {1,0,0,1};
	colorDisabled[] = {1,1,1,0.25};
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightSelected[] = {1,1,1,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	colorTextRight[] = {1,1,1,1};
	colorSelectRight[] = {0,0,0,1};
	colorSelect2Right[] = {0,0,0,1};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1};
	soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1};
	soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1};
	maxHistoryDelay = 1;
	class ComboScrollBar {
		autoScrollEnabled = 1;
		color[] = {1,1,1,0.8};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {0.5,0.5,0.5,0.4};
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
	};
	style = "0x10 + 0x200";
	font = "PuristaLight";
	sizeEx = "safezoneH*0.02";
	shadow = 0;
	colorSelectBackground[] = {1,1,1,0.7};
	arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
	arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
	wholeHeight = 0.45;
	colorActive[] = {1,0,0,1};
};
class RscListBox {
	deletable = 0;
	fade = 0;
	access = 0;
	type = 5;
	style = 16;
	rowHeight = safeZoneH * 0.02;
	colorText[] 				= {1,1,1,1};
	colorDisabled[] 			= {1,1,1,0.25};
	colorScrollbar[]			= {1,0,0,0};
	colorSelect[] 				= {0,0,0,1};
	colorSelect2[] 				= {0,0,0,1};
	colorSelectBackground[] 	= {0.95,0.95,0.95,1};
	colorSelectBackground2[] 	= {1,1,1,0.5};
	colorBackground[] 			= {0,0,0,0.3};
	soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightSelected[] = {1,1,1,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	colorTextRight[] = {1,1,1,1};
	colorSelectRight[] = {0,0,0,1};
	colorSelect2Right[] = {0,0,0,1};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	class ListScrollBar {
		autoScrollEnabled = 1;
		color[] = {1,1,1,0.8};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {0.5,0.5,0.5,0.4};
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
	};
	font = "PuristaLight";
	sizeEx = "safezoneH*0.02";
	shadow = 0;
	colorShadow[] = {0,0,0,0.5};
	period = 1.2;
	maxHistoryDelay = 1;
};
class RscListNBox {
	deletable = 0;
	fade = 0;
	access = 0;
	type = 102;
	rowHeight = safeZoneH * 0.02;
	columns[] = {0,0.3,0.6};
	colorText[] 				= {1,1,1,1};
	colorDisabled[] 			= {1,1,1,0.25};
	colorScrollbar[] 			= {1,0,0,1};
	colorSelect[] 				= {0,0,0,1};
	colorSelect2[] 				= {0,0,0,1};
	colorSelectBackground[] 	= {0.95,0.95,0.95,1};
	colorSelectBackground2[] 	= {1,1,1,0.5};
	colorBackground[] 			= {0,0,0,1};
	soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[]	= {1,1,1,1};
	colorPictudeDisabled[] 	= {1,1,1,0.25};
	tooltipColorText[] 		= {1,1,1,1};
	tooltipColorBox[] 		= {1,1,1,1};
	tooltipColorShade[] 	= {0,0,0,0.65};
	class ListScrollBar {
		autoScrollEnabled = 1;
		color[] = {1,1,1,0.8};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {0.5,0.5,0.5,0.4};
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
	};
	style = 16;
	font = "PuristaMedium";
	sizeEx = "safezoneH*0.02";
	shadow = 0;
	colorShadow[] = {0,0,0,0.5};
	period = 1.2;
	maxHistoryDelay = 1;
	colorPictureDisabled[] = {1,1,1,1};	
	color[] = {1,1,1,1};
	drawSideArrows = 0;
	idcLeft = -1;
	idcRight = -1;
};
class RscButton {
	deletable = 0;
	fade = 0;
	access = 0;
	type = 1;
	text = "";
	colorText[] 				= {1,1,1,1};
	colorDisabled[] 			= {1,1,1,0.3};
	colorBackground[] 			= {0,0,0,0.8};
	colorBackgroundActive[] 	= {1,1,1,0.8};
	colorBackgroundDisabled[] 	= {0.8,0.8,0.8,0.3};
	colorFocused[] 				= {0,0,0,0.8};
	colorShadow[] 				= {0,0,0,0};
	colorBorder[] 				= {0,0,0,0.8};
	soundEnter[] 	= {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundPush[] 	= {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
	soundClick[] 	= {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEscape[] 	= {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
	style = 2;

	shadow = 2;
	font = "PuristaLight";
	sizeEx = "safezoneH*0.02";
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0;
	offsetPressedY = 0;
	borderSize = 0;
};
class RscShortcutButton {
	deletable = 0;
	fade = 0;
	type = 16;
	idc = -1;
	style = 0;
	default = 0;
	action = "";
	text = "";
	textSecondary = "";
	color[] 					= {1,1,1,1};
	color2[] 					= {1,1,1,1};
	colorBackground[] 			= {1,1,1,1};
	colorBackgroundFocused[]	= {1,1,1,1};
	colorBackground2[] 			= {1,1,1,1};
	colorSecondary[] 			= {1,1,1,1};
	color2Secondary[] 			= {1,1,1,1};
	colorFocused[] 				= {1,1,1,1};
	colorFocusedSecondary[] 	= {1,1,1,1};
	colorDisabled[] 			= {1,1,1,1};
	colorDisabledSecondary[] 	= {1,1,1,1};
	shadow = 1;
	animTextureDefault 	= "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureNormal 	= "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureDisabled = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureOver 	= "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\over_ca.paa";
	animTextureFocused 	= "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\focus_ca.paa";
	animTexturePressed 	= "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\down_ca.paa";
	textureNoShortcut 	= "#(argb,8,8,3)color(0,0,0,0)";
	soundEnter[] 		= {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundPush[] 		= {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
	soundClick[] 		= {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEscape[] 		= {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
	class HitZone {
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
	class Attributes {
		font = "PuristaLight";
		color = "#E5E5E5";
		align = "left";
		shadow = "true";
	};
	class AttributesImage {
		font = "PuristaLight";
		color = "#E5E5E5";
		align = "left";
	};
	class ShortcutPos {
		left = 0;
		top = "(((((safezoneW/safezoneH) min 1.2)/1.2)/20) - (((((safezoneW/safezoneH) min 1.2)/1.2)/25)*1))/2";
		w = "(((((safezoneW/safezoneH) min 1.2)/1.2)/25)*1)*(3/4)";
		h = "(((((safezoneW/safezoneH) min 1.2)/1.2)/25)*1)";
	};
	class TextPos {
		left = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0;
	};
	periodFocus = 1.2;
	periodOver = 0.8;
	period = 0.4;
	font = "PuristaLight";
	fontSecondary = "PuristaLight";
	size = "safezoneH*0.02";
	sizeEx = "safezoneH*0.02";
	sizeExSecondary = "safezoneH*0.02";
	shortcuts[] = {};
};
class RscShortcutButtonMain {
	idc = -1;
	style = 0;
	default = 0;
	color[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	class HitZone {
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
	class ShortcutPos {
		left = 0.0145;
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)) / 2";
		w = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2) * (3/4)";
		h = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	};
	class TextPos {
		left = "(((safezoneW / safezoneH) min 1.2) / 32) * 1.5";
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20)*2 - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)) / 2";
		right = 0.005;
		bottom = 0;
	};
	animTextureNormal = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\normal_ca.paa";
	animTextureDisabled = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\disabled_ca.paa";
	animTextureOver = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\over_ca.paa";
	animTextureFocused = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\focus_ca.paa";
	animTexturePressed = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\down_ca.paa";
	animTextureDefault = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\normal_ca.paa";
	period = 0.5;
	font = "PuristaLight";
	size = "safezoneH*0.02";
	sizeEx = "safezoneH*0.02";
	text = "";
	action = "";
	class Attributes {
		font = "PuristaLight";
		color = "#E5E5E5";
		align = "left";
		shadow = "false";
	};
	class AttributesImage {
		font = "PuristaLight";
		color = "#E5E5E5";
		align = "false";
	};
};
class RscFrame {
	type = 0;
	idc = -1;
	style = 64;
	shadow = 2;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "PuristaLight";
	sizeEx = "safezoneH*0.02";
	text = "";
};
class RscSlider {
	deletable = 0;
	fade = 0;
	access = 0;
	type = 43;
	style = 1024;
	color[] = {1,1,1,0.8};
	colorActive[] = {1,1,1,1};
	colorDisabled[] = {0.5,0.5,0.5,0.2};
	shadow = 0;
	arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
	arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
	border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
	thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
};
class IGUIBack {
	type = 0;
	idc = -1;
	style = 128;
	text = "";
	colorText[] = {0,0,0,0};
	colorbackground[] = {0,1,1,0.8};
	font = "PuristaLight";
	sizeEx = 0;
	shadow = 0;
};
class RscCheckBox {
	idc = -1;
	type = 77;
	style = 0;
	checked = 0;
	color[] = {1,1,1,0.7};
	colorFocused[] = {1,1,1,1};
	colorHover[] = {1,1,1,1};
	colorPressed[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.2};
	colorBackground[] = {0,0,0,0};
	colorBackgroundFocused[] = {0,0,0,0};
	colorBackgroundHover[] = {0,0,0,0};
	colorBackgroundPressed[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	textureChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureFocusedChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureFocusedUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureHoverChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureHoverUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	texturePressedChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	texturePressedUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureDisabledChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureDisabledUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	soundEnter[] = {"",0.1,1};
	soundPush[] = {"",0.1,1};
	soundClick[] = {"",0.1,1};
	soundEscape[] = {"",0.1,1};
};
class RscTextCheckBox {
	idc = -1;
	type = 7;
	style = 0;
	colorText[] = {1,0,0,1};
	color[] = {0,0,0,0};
	colorBackground[] = {0,0,0,0};
	colorTextSelect[] = {0,0.8,0,1};
	colorSelectedBg[] = {
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",
		1
	};
	colorSelect[] = {0,0,0,1};
	colorTextDisable[] = {0.4,0.4,0.4,1};
	colorDisable[] = {0.4,0.4,0.4,1};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	font = "PuristaLight";
	sizeEx = "safezoneH*0.02";
	rows = 1;
	columns = 1;
	strings[] = {"UNCHECKED"};
	checked_strings[] = {"CHECKED"};
};
class RscButtonMenu {
	idc = -1;
	type = 16;
	style = "0x02 + 0xC0";
	default = 0;
	shadow = 0;
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
	colorBackground[] = {0,0,0,0.8};
	colorBackgroundFocused[] = {1,1,1,1};
	colorBackground2[] = {0.75,0.75,0.75,1};
	color[] = {1,1,1,1};
	colorFocused[] = {0,0,0,1};
	color2[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	textSecondary = "";
	colorSecondary[] = {1,1,1,1};
	colorFocusedSecondary[] = {0,0,0,1};
	color2Secondary[] = {0,0,0,1};
	colorDisabledSecondary[] = {1,1,1,0.25};
	sizeExSecondary = "safezoneH*0.02";
	fontSecondary = "PuristaLight";
	period = 1.2;
	periodFocus = 1.2;
	periodOver = 1.2;
	size = "safezoneH*0.02";
	sizeEx = "safezoneH*0.02";
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	class TextPos {
		left = "0.25 * (((safezoneW / safezoneH) min 1.2) / 40)";
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0;
	};
	class Attributes {
		font = "PuristaLight";
		color = "#E5E5E5";
		align = "left";
		shadow = "false";
	};
	class ShortcutPos {
		left = "5.25 * (((safezoneW / safezoneH) min 1.2) / 40)";
		top = 0;
		w = "1 * (((safezoneW / safezoneH) min 1.2) / 40)";
		h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
};
class RscButtonMenuOK {
	idc = 1;
	shortcuts[] = {"0x00050000 + 0",28,57,156};
	default = 1;
	text = "OK";
	soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenuOK\soundPush",0.09,1};
};
class RscButtonMenuCancel {
	idc = 2;
	shortcuts[] = {"0x00050000 + 1"};
	text = "Cancel";
};
class RscControlsGroup {
	deletable = 0;
	fade = 0;
	class VScrollbar {color[] = {1,1,1,1};width = 0.021;autoScrollEnabled = 1;};
	class HScrollbar {color[] = {1,1,1,1};height = 0.028;};
	class Controls{};
	type = 15;
	idc = -1;
	shadow = 0;
	style = 16;
};
class RscProgress {
	idc = -1;
	type = 8;
	style = 0;
	deleteable = 0;
	fade = 0;
	colorBar[] = {1,1,1,1};
	colorFrame[] = {0,0,0,1};
	texture = "#(argb,8,8,3)color(1,1,1,1)";
	w = safezoneW * 0.250;
	h = safezoneH * 0.030;
};

class RscMapControl {
	deleteable = 0;
	fade = 0;
	access = 0;
	type = 101;
	style = 48;
	
	alphaFadeEndScale = 0.4;
	alphaFadeStartScale = 0.35;
	colorBackground[]			= {1.0,1.0,1.0,1.0};
	colorCountlines[]			= {0.6,0.5,0.2,0.3};
	colorCountlinesWater[]		= {0.5,0.6,0.7,0.3};
	colorForest[]				= {0.6,0.8,0.4,0.5};
	colorForestBorder[]			= {0.0,0.0,0.0,0.0};
	colorGrid[]					= {0.1,0.1,0.1,0.6};
	colorGridMap[]				= {0.1,0.1,0.1,0.6};
	colorInactive[]				= {1.0,1.0,1.0,0.5};
	colorLevels[]				= {0.3,0.2,0.1,0.5};
	colorMainCountlines[]		= {0.6,0.4,0.2,0.5};
	colorMainCountlinesWater[]	= {0.5,0.6,0.7,0.6};
	colorMainRoads[]			= {0.9,0.5,0.3,1.0};
	colorMainRoadsFill[]		= {1.0,0.6,0.4,1.0};
	colorNames[]				= {0.1,0.1,0.1,0.9};
	colorOutside[]				= {0.0,0.0,0.0,1.0};
	colorPowerLines[]			= {0.1,0.1,0.1,1.0};
	colorRailWay[]				= {0.8,0.2,0.0,1.0};
	colorRoads[]				= {0.7,0.7,0.7,1.0};
	colorRoadsFill[]			= {1.0,1.0,1.0,1.0};
	colorRocks[]				= {0.0,0.0,0.0,0.3};
	colorRocksBorder[]			= {0.0,0.0,0.0,0.0};
	colorSea[]					= {0.5,0.6,0.9,0.5};
	colorText[]					= {0.0,0.0,0.0,1.0};
	colorTracks[]				= {0.8,0.8,0.7,0.2};
	colorTracksFill[]			= {0.8,0.8,0.7,1.0};
	font = "PuristaLight";
	fontGrid = "PuristaLight";
	fontInfo = "PuristaMedium";
	fontLabel = "PuristaMedium";
	fontLevel = "PuristaLight";
	fontNames = "PuristaMedium";
	fontUnits = "PuristaLight";
	maxSatelliteAlpha = 0;
	moveOnEdges = 0;
	ptsPerSquareCLn = 10;
	ptsPerSquareCost = 10;
	ptsPerSquareExp = 10;
	ptsPerSquareFor = 9;
	ptsPerSquareForEdge = 9;
	ptsPerSquareObj = 9;
	ptsPerSquareRoad = 6;
	ptsPerSquareSea = 5;
	ptsPerSquareTxt = 3;
	scaleDefault = 0.16;
	scaleMax = 1;
	scaleMin = 0.001;
	shadow = 0;
	showCountourInterval = 0;
	sizeEx = "safezoneH*0.02";
	sizeExGrid = 0.02;
	sizeExInfo = "safezoneH*0.02";
	sizeExLabel = "safezoneH*0.02";
	sizeExLevel = 0.02;
	sizeExNames = "safezoneH*0.02";
	sizeExUnits = "safezoneH*0.02";
	stickX[] = {0.2,["Gamma",1,1.5]};
	stickY[] = {0.2,["Gamma",1,1.5]};
	text = "#(argb,8,8,3)color(1,1,1,1)";
	
	class ActiveMarker {
		color[] = {0.3,0.1,0.9,1};
		size = 50;
	};
	class Bunker {
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		importance = "1.5 * 14 * 0.05";
		size = 14;
	};
	class Bush {
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0.45,0.64,0.33,0.4};
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		importance = "0.2 * 14 * 0.05 * 0.05";
		size = 7;
	};
	class BusStop {
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\busstop_CA.paa";
		importance = 1;
		size = 24;
	};
	class Chapel {
		coefMax = 4;
		coefMin = 0.85;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
		importance = 1;
		size = 24;
	};
	class Church {
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\church_CA.paa";
		importance = 1;
		size = 24;
	};
	class Command {
		coefMax = 1;
		coefMin = 1;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		importance =1;
		size = 18;
	};
	class Cross {
		coefMax = 1;
		coefMin = 0.85;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
		importance = 1;
		size = 24;
	};
	class CustomMark {
		coefMax = 1;
		coefMin = 1;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\custommark_ca.paa";
		importance = 1;
		size = 24;
	};
	class Fortress {
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		importance = 1;
		size = 16;
	};
	class Fountain {
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
		importance = 1;
		size = 11;
	};
	class Fuelstation {
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
		importance = 1;
		size = 24;
	};
	class Hospital {
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
		importance = 1;
		size = 24;
	};
	class Lighthouse {
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
		importance = 1;
		size = 24;
	};
	class power {
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
		importance = 1;
		size = 24;
	};
	class powersolar {
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
		importance = 1;
		size = 24;
	};
	class powerwind {
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
		importance = 1;
		size = 24;
		};
	class powerwave
		{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
		importance = 1;
		size = 24;
	};
	class Quay {
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
		importance = 1;
		size = 24;
	};
	class Rock {
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0.1,0.1,0.1,0.8};
		icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
		importance = 0.3;
		size = 12;
	};
	class Ruin {
		coefMax = 4;
		coefMin = 1;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
		importance = 96;
		size = 16;
	};
	class shipwreck {
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\shipwreck_CA.paa";
		importance = 1;
		size = 24;
	};
	class SmallTree {
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0.45,0.64,0.33,0.4};
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		importance = 0.36;
		size = 12;
	};
	class Stack {
		coefMax = 4;
		coefMin = 0.9;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
		importance = 1.6;
		size = 20;
	};
	class LineMarker {
		lineWidthThin = 0.008;
		lineWidthThick = 0.014;
		lineDistanceMin = 3e-005;
		lineLengthMin = 5;
	};
	class Task {
		coefMax = 1;
		coefMin = 1;
		color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorCanceled[] = {0.7,0.7,0.7,1};
		colorCreated[] = {1,1,1,1};
		colorDone[] = {0.7,1,0.3,1};
		colorFailed[] = {1,0.3,0.2,1};
		icon = "\A3\ui_f\data\map\mapcontrol\taskIcon_CA.paa";
		iconCanceled = "\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";
		iconCreated = "\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";
		iconDone = "\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa";
		iconFailed = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";
		importance = 1;
		size = 27;
	};
	class Tourism {
		coefMax = 4;
		coefMin = 0.7;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
		importance = 0.8;
		size = 16;
	};
	class Transmitter {
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
		importance = 1;
		size = 24;
	};
	class Tree {
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0.45,0.64,0.33,0.4};
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		importance = 0.8;
		size = 12;
	};
	class ViewTower {
		coefMax = 4;
		coefMin = 0.5;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
		importance = 2;
		size = 16;
	};
	class Watertower {
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
		importance = 1;
		size = 24;
	};
	class Waypoint {
		coefMax = 1;
		coefMin = 1;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		importance = 1;
		size = 24;
	};
	class WaypointCompleted {
		coefMax = 1;
		coefMin = 1;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\waypointCompleted_ca.paa";
		importance = 1;
		size = 24;
	};
};