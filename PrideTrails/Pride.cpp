#include "pch.h"
#include "IniFile.hpp"
#include "Trails.h"

//Macros
#define ReplacePVM(a, b) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" b ".PVM");
#define ReplaceTex(pvm, pvr, folder, pngname, gbix, x, y) helperFunctions.ReplaceTexture(pvm, pvr, (std::string(path) + "\\textures\\" folder "\\" pngname ".png").c_str(), gbix, x, y);

enum YourPride { LGBT, Agender, Aromantic, Asexual, Bear, Bigender, Bisexual, Demisexual, GayMale, Genderfluid, Genderqueer, Intersex, Lesbian, LipstickLes, NonBinary, Pansexual, Polysexual, Trans };
static int Pride = LGBT;

void Init_Trails()
{
	WriteData((void**)0x494081, (void*)SonicDashTrail_Init);
	SONIC_OBJECTS[57] = &object_0061AA94;
}

extern "C"
{
	__declspec(dllexport) void __cdecl Init(const char* path, const HelperFunctions& helperFunctions)
	{
		HMODULE handle = GetModuleHandle(L"CHRMODELS_orig");
		NJS_OBJECT** ___SONIC_OBJECTS = (NJS_OBJECT**)GetProcAddress(handle, "___SONIC_OBJECTS");
		Init_Trails();
		//Functions
		const IniFile* config = new IniFile(std::string(path) + "\\config.ini");
		std::string Pride_String = "LGBT";
		Pride_String = config->getString("Pride", "Orientation/Identity", "LGBT");
		if (Pride_String == "LGBT") Pride = LGBT;
		if (Pride_String == "Agender") Pride = Agender;
		if (Pride_String == "Aromantic") Pride = Aromantic;
		if (Pride_String == "Asexual") Pride = Asexual;
		if (Pride_String == "Bear") Pride = Bear;
		if (Pride_String == "Bigender") Pride = Bigender;
		if (Pride_String == "Bisexual") Pride = Bisexual;
		if (Pride_String == "Demisexual") Pride = Demisexual;
		if (Pride_String == "GayMale") Pride = GayMale;
		if (Pride_String == "Genderfluid") Pride = Genderfluid;
		if (Pride_String == "Genderqueer") Pride = Genderqueer;
		if (Pride_String == "Intersex") Pride = Intersex;
		if (Pride_String == "Lesbian") Pride = Lesbian;
		if (Pride_String == "LipstickLes") Pride = LipstickLes;
		if (Pride_String == "NonBinary") Pride = NonBinary;
		if (Pride_String == "Pansexual") Pride = Pansexual;
		if (Pride_String == "Polysexual") Pride = Polysexual;
		if (Pride_String == "Trans") Pride = Trans;

		if (Pride == LGBT)
		{
			ReplaceTex("supersonic", "ss_dash01", "LGBT", "s_dash01", 406412, 16, 16);
			ReplaceTex("supersonic", "ss_dash02", "LGBT", "s_dash02", 406390, 16, 16);
			ReplaceTex("supersonic", "ss_dash03", "LGBT", "s_dash03", 406391, 16, 16);
			ReplaceTex("supersonic", "ss_dash04", "LGBT", "s_dash04", 406392, 16, 16);
			ReplaceTex("supersonic", "ss_dash05", "LGBT", "s_dash05", 406393, 16, 16);
			ReplaceTex("supersonic", "ss_dash06", "LGBT", "s_dash06", 406394, 16, 16);
			ReplaceTex("supersonic", "ss_dash07", "LGBT", "s_dash07", 406395, 16, 16);
			ReplaceTex("supersonic", "ss_dash08", "LGBT", "s_dash08", 406396, 16, 16);
			ReplaceTex("supersonic", "ss_dash09", "LGBT", "s_dash09", 406397, 16, 16);
			ReplaceTex("supersonic", "ss_dash10", "LGBT", "s_dash10", 406398, 16, 16);
			ReplaceTex("supersonic", "ss_dash11", "LGBT", "s_dash11", 406399, 16, 16);
			ReplaceTex("supersonic", "ss_dash12", "LGBT", "s_dash12", 406400, 16, 16);
			ReplaceTex("supersonic", "ss_dash13", "LGBT", "s_dash13", 406401, 16, 16);
			ReplaceTex("supersonic", "ss_dash14", "LGBT", "s_dash14", 406402, 16, 16);
			ReplaceTex("supersonic", "ss_dash15", "LGBT", "s_dash15", 406403, 16, 16);
			ReplaceTex("supersonic", "ss_dash16", "LGBT", "s_dash16", 406404, 16, 16);
			ReplaceTex("supersonic", "ss_dash17", "LGBT", "s_dash17", 406405, 16, 16);
			ReplaceTex("supersonic", "ss_dash18", "LGBT", "s_dash18", 406406, 16, 16);
			ReplaceTex("supersonic", "ss_dash19", "LGBT", "s_dash19", 406407, 16, 16);
			ReplaceTex("supersonic", "ss_dash20", "LGBT", "s_dash20", 406408, 16, 16);
			ReplaceTex("supersonic", "ss_dash21", "LGBT", "s_dash21", 406409, 16, 16);
			ReplaceTex("supersonic", "ss_dash22", "LGBT", "s_dash23", 406410, 16, 16);
			ReplaceTex("supersonic", "ss_dash23", "LGBT", "s_dash23", 406411, 16, 16);
			ReplacePVM("son_eff", "LGBT")
		}

		if (Pride == Agender)
		{
			ReplacePVM("son_eff", "Agender")
			ReplaceTex("supersonic", "ss_dash01", "Agender", "s_dash01", 406412, 16, 16);
			ReplaceTex("supersonic", "ss_dash02", "Agender", "s_dash02", 406390, 16, 16);
			ReplaceTex("supersonic", "ss_dash03", "Agender", "s_dash03", 406391, 16, 16);
			ReplaceTex("supersonic", "ss_dash04", "Agender", "s_dash04", 406392, 16, 16);
			ReplaceTex("supersonic", "ss_dash05", "Agender", "s_dash05", 406393, 16, 16);
			ReplaceTex("supersonic", "ss_dash06", "Agender", "s_dash06", 406394, 16, 16);
			ReplaceTex("supersonic", "ss_dash07", "Agender", "s_dash07", 406395, 16, 16);
			ReplaceTex("supersonic", "ss_dash08", "Agender", "s_dash08", 406396, 16, 16);
			ReplaceTex("supersonic", "ss_dash09", "Agender", "s_dash09", 406397, 16, 16);
			ReplaceTex("supersonic", "ss_dash10", "Agender", "s_dash10", 406398, 16, 16);
			ReplaceTex("supersonic", "ss_dash11", "Agender", "s_dash11", 406399, 16, 16);
			ReplaceTex("supersonic", "ss_dash12", "Agender", "s_dash12", 406400, 16, 16);
			ReplaceTex("supersonic", "ss_dash13", "Agender", "s_dash13", 406401, 16, 16);
			ReplaceTex("supersonic", "ss_dash14", "Agender", "s_dash14", 406402, 16, 16);
			ReplaceTex("supersonic", "ss_dash15", "Agender", "s_dash15", 406403, 16, 16);
			ReplaceTex("supersonic", "ss_dash16", "Agender", "s_dash16", 406404, 16, 16);
			ReplaceTex("supersonic", "ss_dash17", "Agender", "s_dash17", 406405, 16, 16);
			ReplaceTex("supersonic", "ss_dash18", "Agender", "s_dash18", 406406, 16, 16);
			ReplaceTex("supersonic", "ss_dash19", "Agender", "s_dash19", 406407, 16, 16);
			ReplaceTex("supersonic", "ss_dash20", "Agender", "s_dash20", 406408, 16, 16);
			ReplaceTex("supersonic", "ss_dash21", "Agender", "s_dash21", 406409, 16, 16);
			ReplaceTex("supersonic", "ss_dash22", "Agender", "s_dash23", 406410, 16, 16);
			ReplaceTex("supersonic", "ss_dash23", "Agender", "s_dash23", 406411, 16, 16);
		}

		if (Pride == Aromantic)
		{
			ReplaceTex("supersonic", "ss_dash01", "Aromantic", "s_dash01", 406412, 16, 16);
			ReplaceTex("supersonic", "ss_dash02", "Aromantic", "s_dash02", 406390, 16, 16);
			ReplaceTex("supersonic", "ss_dash03", "Aromantic", "s_dash03", 406391, 16, 16);
			ReplaceTex("supersonic", "ss_dash04", "Aromantic", "s_dash04", 406392, 16, 16);
			ReplaceTex("supersonic", "ss_dash05", "Aromantic", "s_dash05", 406393, 16, 16);
			ReplaceTex("supersonic", "ss_dash06", "Aromantic", "s_dash06", 406394, 16, 16);
			ReplaceTex("supersonic", "ss_dash07", "Aromantic", "s_dash07", 406395, 16, 16);
			ReplaceTex("supersonic", "ss_dash08", "Aromantic", "s_dash08", 406396, 16, 16);
			ReplaceTex("supersonic", "ss_dash09", "Aromantic", "s_dash09", 406397, 16, 16);
			ReplaceTex("supersonic", "ss_dash10", "Aromantic", "s_dash10", 406398, 16, 16);
			ReplaceTex("supersonic", "ss_dash11", "Aromantic", "s_dash11", 406399, 16, 16);
			ReplaceTex("supersonic", "ss_dash12", "Aromantic", "s_dash12", 406400, 16, 16);
			ReplaceTex("supersonic", "ss_dash13", "Aromantic", "s_dash13", 406401, 16, 16);
			ReplaceTex("supersonic", "ss_dash14", "Aromantic", "s_dash14", 406402, 16, 16);
			ReplaceTex("supersonic", "ss_dash15", "Aromantic", "s_dash15", 406403, 16, 16);
			ReplaceTex("supersonic", "ss_dash16", "Aromantic", "s_dash16", 406404, 16, 16);
			ReplaceTex("supersonic", "ss_dash17", "Aromantic", "s_dash17", 406405, 16, 16);
			ReplaceTex("supersonic", "ss_dash18", "Aromantic", "s_dash18", 406406, 16, 16);
			ReplaceTex("supersonic", "ss_dash19", "Aromantic", "s_dash19", 406407, 16, 16);
			ReplaceTex("supersonic", "ss_dash20", "Aromantic", "s_dash20", 406408, 16, 16);
			ReplaceTex("supersonic", "ss_dash21", "Aromantic", "s_dash21", 406409, 16, 16);
			ReplaceTex("supersonic", "ss_dash22", "Aromantic", "s_dash23", 406410, 16, 16);
			ReplaceTex("supersonic", "ss_dash23", "Aromantic", "s_dash23", 406411, 16, 16);
			ReplacePVM("son_eff", "Aromantic")
		}

		if (Pride == Asexual)
		{
			ReplaceTex("supersonic", "ss_dash01", "Asexual", "s_dash01", 406412, 16, 16);
			ReplaceTex("supersonic", "ss_dash02", "Asexual", "s_dash02", 406390, 16, 16);
			ReplaceTex("supersonic", "ss_dash03", "Asexual", "s_dash03", 406391, 16, 16);
			ReplaceTex("supersonic", "ss_dash04", "Asexual", "s_dash04", 406392, 16, 16);
			ReplaceTex("supersonic", "ss_dash05", "Asexual", "s_dash05", 406393, 16, 16);
			ReplaceTex("supersonic", "ss_dash06", "Asexual", "s_dash06", 406394, 16, 16);
			ReplaceTex("supersonic", "ss_dash07", "Asexual", "s_dash07", 406395, 16, 16);
			ReplaceTex("supersonic", "ss_dash08", "Asexual", "s_dash08", 406396, 16, 16);
			ReplaceTex("supersonic", "ss_dash09", "Asexual", "s_dash09", 406397, 16, 16);
			ReplaceTex("supersonic", "ss_dash10", "Asexual", "s_dash10", 406398, 16, 16);
			ReplaceTex("supersonic", "ss_dash11", "Asexual", "s_dash11", 406399, 16, 16);
			ReplaceTex("supersonic", "ss_dash12", "Asexual", "s_dash12", 406400, 16, 16);
			ReplaceTex("supersonic", "ss_dash13", "Asexual", "s_dash13", 406401, 16, 16);
			ReplaceTex("supersonic", "ss_dash14", "Asexual", "s_dash14", 406402, 16, 16);
			ReplaceTex("supersonic", "ss_dash15", "Asexual", "s_dash15", 406403, 16, 16);
			ReplaceTex("supersonic", "ss_dash16", "Asexual", "s_dash16", 406404, 16, 16);
			ReplaceTex("supersonic", "ss_dash17", "Asexual", "s_dash17", 406405, 16, 16);
			ReplaceTex("supersonic", "ss_dash18", "Asexual", "s_dash18", 406406, 16, 16);
			ReplaceTex("supersonic", "ss_dash19", "Asexual", "s_dash19", 406407, 16, 16);
			ReplaceTex("supersonic", "ss_dash20", "Asexual", "s_dash20", 406408, 16, 16);
			ReplaceTex("supersonic", "ss_dash21", "Asexual", "s_dash21", 406409, 16, 16);
			ReplaceTex("supersonic", "ss_dash22", "Asexual", "s_dash23", 406410, 16, 16);
			ReplaceTex("supersonic", "ss_dash23", "Asexual", "s_dash23", 406411, 16, 16);
			ReplacePVM("son_eff", "Asexual")
		}

		if (Pride == Bear)
		{
			ReplaceTex("supersonic", "ss_dash01", "Bear", "s_dash01", 406412, 16, 16);
			ReplaceTex("supersonic", "ss_dash02", "Bear", "s_dash02", 406390, 16, 16);
			ReplaceTex("supersonic", "ss_dash03", "Bear", "s_dash03", 406391, 16, 16);
			ReplaceTex("supersonic", "ss_dash04", "Bear", "s_dash04", 406392, 16, 16);
			ReplaceTex("supersonic", "ss_dash05", "Bear", "s_dash05", 406393, 16, 16);
			ReplaceTex("supersonic", "ss_dash06", "Bear", "s_dash06", 406394, 16, 16);
			ReplaceTex("supersonic", "ss_dash07", "Bear", "s_dash07", 406395, 16, 16);
			ReplaceTex("supersonic", "ss_dash08", "Bear", "s_dash08", 406396, 16, 16);
			ReplaceTex("supersonic", "ss_dash09", "Bear", "s_dash09", 406397, 16, 16);
			ReplaceTex("supersonic", "ss_dash10", "Bear", "s_dash10", 406398, 16, 16);
			ReplaceTex("supersonic", "ss_dash11", "Bear", "s_dash11", 406399, 16, 16);
			ReplaceTex("supersonic", "ss_dash12", "Bear", "s_dash12", 406400, 16, 16);
			ReplaceTex("supersonic", "ss_dash13", "Bear", "s_dash13", 406401, 16, 16);
			ReplaceTex("supersonic", "ss_dash14", "Bear", "s_dash14", 406402, 16, 16);
			ReplaceTex("supersonic", "ss_dash15", "Bear", "s_dash15", 406403, 16, 16);
			ReplaceTex("supersonic", "ss_dash16", "Bear", "s_dash16", 406404, 16, 16);
			ReplaceTex("supersonic", "ss_dash17", "Bear", "s_dash17", 406405, 16, 16);
			ReplaceTex("supersonic", "ss_dash18", "Bear", "s_dash18", 406406, 16, 16);
			ReplaceTex("supersonic", "ss_dash19", "Bear", "s_dash19", 406407, 16, 16);
			ReplaceTex("supersonic", "ss_dash20", "Bear", "s_dash20", 406408, 16, 16);
			ReplaceTex("supersonic", "ss_dash21", "Bear", "s_dash21", 406409, 16, 16);
			ReplaceTex("supersonic", "ss_dash22", "Bear", "s_dash23", 406410, 16, 16);
			ReplaceTex("supersonic", "ss_dash23", "Bear", "s_dash23", 406411, 16, 16);
			ReplacePVM("son_eff", "Bear")
		}

		if (Pride == Bigender)
		{
			ReplaceTex("supersonic", "ss_dash01", "Bigender", "s_dash01", 406412, 16, 16);
			ReplaceTex("supersonic", "ss_dash02", "Bigender", "s_dash02", 406390, 16, 16);
			ReplaceTex("supersonic", "ss_dash03", "Bigender", "s_dash03", 406391, 16, 16);
			ReplaceTex("supersonic", "ss_dash04", "Bigender", "s_dash04", 406392, 16, 16);
			ReplaceTex("supersonic", "ss_dash05", "Bigender", "s_dash05", 406393, 16, 16);
			ReplaceTex("supersonic", "ss_dash06", "Bigender", "s_dash06", 406394, 16, 16);
			ReplaceTex("supersonic", "ss_dash07", "Bigender", "s_dash07", 406395, 16, 16);
			ReplaceTex("supersonic", "ss_dash08", "Bigender", "s_dash08", 406396, 16, 16);
			ReplaceTex("supersonic", "ss_dash09", "Bigender", "s_dash09", 406397, 16, 16);
			ReplaceTex("supersonic", "ss_dash10", "Bigender", "s_dash10", 406398, 16, 16);
			ReplaceTex("supersonic", "ss_dash11", "Bigender", "s_dash11", 406399, 16, 16);
			ReplaceTex("supersonic", "ss_dash12", "Bigender", "s_dash12", 406400, 16, 16);
			ReplaceTex("supersonic", "ss_dash13", "Bigender", "s_dash13", 406401, 16, 16);
			ReplaceTex("supersonic", "ss_dash14", "Bigender", "s_dash14", 406402, 16, 16);
			ReplaceTex("supersonic", "ss_dash15", "Bigender", "s_dash15", 406403, 16, 16);
			ReplaceTex("supersonic", "ss_dash16", "Bigender", "s_dash16", 406404, 16, 16);
			ReplaceTex("supersonic", "ss_dash17", "Bigender", "s_dash17", 406405, 16, 16);
			ReplaceTex("supersonic", "ss_dash18", "Bigender", "s_dash18", 406406, 16, 16);
			ReplaceTex("supersonic", "ss_dash19", "Bigender", "s_dash19", 406407, 16, 16);
			ReplaceTex("supersonic", "ss_dash20", "Bigender", "s_dash20", 406408, 16, 16);
			ReplaceTex("supersonic", "ss_dash21", "Bigender", "s_dash21", 406409, 16, 16);
			ReplaceTex("supersonic", "ss_dash22", "Bigender", "s_dash23", 406410, 16, 16);
			ReplaceTex("supersonic", "ss_dash23", "Bigender", "s_dash23", 406411, 16, 16);
			ReplacePVM("son_eff", "Bigender")
		}

		if (Pride == Bisexual)
		{
			ReplaceTex("supersonic", "ss_dash01", "Bisexual", "s_dash01", 406412, 16, 16);
			ReplaceTex("supersonic", "ss_dash02", "Bisexual", "s_dash02", 406390, 16, 16);
			ReplaceTex("supersonic", "ss_dash03", "Bisexual", "s_dash03", 406391, 16, 16);
			ReplaceTex("supersonic", "ss_dash04", "Bisexual", "s_dash04", 406392, 16, 16);
			ReplaceTex("supersonic", "ss_dash05", "Bisexual", "s_dash05", 406393, 16, 16);
			ReplaceTex("supersonic", "ss_dash06", "Bisexual", "s_dash06", 406394, 16, 16);
			ReplaceTex("supersonic", "ss_dash07", "Bisexual", "s_dash07", 406395, 16, 16);
			ReplaceTex("supersonic", "ss_dash08", "Bisexual", "s_dash08", 406396, 16, 16);
			ReplaceTex("supersonic", "ss_dash09", "Bisexual", "s_dash09", 406397, 16, 16);
			ReplaceTex("supersonic", "ss_dash10", "Bisexual", "s_dash10", 406398, 16, 16);
			ReplaceTex("supersonic", "ss_dash11", "Bisexual", "s_dash11", 406399, 16, 16);
			ReplaceTex("supersonic", "ss_dash12", "Bisexual", "s_dash12", 406400, 16, 16);
			ReplaceTex("supersonic", "ss_dash13", "Bisexual", "s_dash13", 406401, 16, 16);
			ReplaceTex("supersonic", "ss_dash14", "Bisexual", "s_dash14", 406402, 16, 16);
			ReplaceTex("supersonic", "ss_dash15", "Bisexual", "s_dash15", 406403, 16, 16);
			ReplaceTex("supersonic", "ss_dash16", "Bisexual", "s_dash16", 406404, 16, 16);
			ReplaceTex("supersonic", "ss_dash17", "Bisexual", "s_dash17", 406405, 16, 16);
			ReplaceTex("supersonic", "ss_dash18", "Bisexual", "s_dash18", 406406, 16, 16);
			ReplaceTex("supersonic", "ss_dash19", "Bisexual", "s_dash19", 406407, 16, 16);
			ReplaceTex("supersonic", "ss_dash20", "Bisexual", "s_dash20", 406408, 16, 16);
			ReplaceTex("supersonic", "ss_dash21", "Bisexual", "s_dash21", 406409, 16, 16);
			ReplaceTex("supersonic", "ss_dash22", "Bisexual", "s_dash23", 406410, 16, 16);
			ReplaceTex("supersonic", "ss_dash23", "Bisexual", "s_dash23", 406411, 16, 16);
			ReplacePVM("son_eff", "Bisexual")
		}

		if (Pride == Demisexual)
		{
			ReplaceTex("supersonic", "ss_dash01", "Demisexual", "s_dash01", 406412, 16, 16);
			ReplaceTex("supersonic", "ss_dash02", "Demisexual", "s_dash02", 406390, 16, 16);
			ReplaceTex("supersonic", "ss_dash03", "Demisexual", "s_dash03", 406391, 16, 16);
			ReplaceTex("supersonic", "ss_dash04", "Demisexual", "s_dash04", 406392, 16, 16);
			ReplaceTex("supersonic", "ss_dash05", "Demisexual", "s_dash05", 406393, 16, 16);
			ReplaceTex("supersonic", "ss_dash06", "Demisexual", "s_dash06", 406394, 16, 16);
			ReplaceTex("supersonic", "ss_dash07", "Demisexual", "s_dash07", 406395, 16, 16);
			ReplaceTex("supersonic", "ss_dash08", "Demisexual", "s_dash08", 406396, 16, 16);
			ReplaceTex("supersonic", "ss_dash09", "Demisexual", "s_dash09", 406397, 16, 16);
			ReplaceTex("supersonic", "ss_dash10", "Demisexual", "s_dash10", 406398, 16, 16);
			ReplaceTex("supersonic", "ss_dash11", "Demisexual", "s_dash11", 406399, 16, 16);
			ReplaceTex("supersonic", "ss_dash12", "Demisexual", "s_dash12", 406400, 16, 16);
			ReplaceTex("supersonic", "ss_dash13", "Demisexual", "s_dash13", 406401, 16, 16);
			ReplaceTex("supersonic", "ss_dash14", "Demisexual", "s_dash14", 406402, 16, 16);
			ReplaceTex("supersonic", "ss_dash15", "Demisexual", "s_dash15", 406403, 16, 16);
			ReplaceTex("supersonic", "ss_dash16", "Demisexual", "s_dash16", 406404, 16, 16);
			ReplaceTex("supersonic", "ss_dash17", "Demisexual", "s_dash17", 406405, 16, 16);
			ReplaceTex("supersonic", "ss_dash18", "Demisexual", "s_dash18", 406406, 16, 16);
			ReplaceTex("supersonic", "ss_dash19", "Demisexual", "s_dash19", 406407, 16, 16);
			ReplaceTex("supersonic", "ss_dash20", "Demisexual", "s_dash20", 406408, 16, 16);
			ReplaceTex("supersonic", "ss_dash21", "Demisexual", "s_dash21", 406409, 16, 16);
			ReplaceTex("supersonic", "ss_dash22", "Demisexual", "s_dash23", 406410, 16, 16);
			ReplaceTex("supersonic", "ss_dash23", "Demisexual", "s_dash23", 406411, 16, 16);
			ReplacePVM("son_eff", "Demisexual")
		}

		if (Pride == GayMale)
		{
			ReplaceTex("supersonic", "ss_dash01", "GayMale", "s_dash01", 406412, 16, 16);
			ReplaceTex("supersonic", "ss_dash02", "GayMale", "s_dash02", 406390, 16, 16);
			ReplaceTex("supersonic", "ss_dash03", "GayMale", "s_dash03", 406391, 16, 16);
			ReplaceTex("supersonic", "ss_dash04", "GayMale", "s_dash04", 406392, 16, 16);
			ReplaceTex("supersonic", "ss_dash05", "GayMale", "s_dash05", 406393, 16, 16);
			ReplaceTex("supersonic", "ss_dash06", "GayMale", "s_dash06", 406394, 16, 16);
			ReplaceTex("supersonic", "ss_dash07", "GayMale", "s_dash07", 406395, 16, 16);
			ReplaceTex("supersonic", "ss_dash08", "GayMale", "s_dash08", 406396, 16, 16);
			ReplaceTex("supersonic", "ss_dash09", "GayMale", "s_dash09", 406397, 16, 16);
			ReplaceTex("supersonic", "ss_dash10", "GayMale", "s_dash10", 406398, 16, 16);
			ReplaceTex("supersonic", "ss_dash11", "GayMale", "s_dash11", 406399, 16, 16);
			ReplaceTex("supersonic", "ss_dash12", "GayMale", "s_dash12", 406400, 16, 16);
			ReplaceTex("supersonic", "ss_dash13", "GayMale", "s_dash13", 406401, 16, 16);
			ReplaceTex("supersonic", "ss_dash14", "GayMale", "s_dash14", 406402, 16, 16);
			ReplaceTex("supersonic", "ss_dash15", "GayMale", "s_dash15", 406403, 16, 16);
			ReplaceTex("supersonic", "ss_dash16", "GayMale", "s_dash16", 406404, 16, 16);
			ReplaceTex("supersonic", "ss_dash17", "GayMale", "s_dash17", 406405, 16, 16);
			ReplaceTex("supersonic", "ss_dash18", "GayMale", "s_dash18", 406406, 16, 16);
			ReplaceTex("supersonic", "ss_dash19", "GayMale", "s_dash19", 406407, 16, 16);
			ReplaceTex("supersonic", "ss_dash20", "GayMale", "s_dash20", 406408, 16, 16);
			ReplaceTex("supersonic", "ss_dash21", "GayMale", "s_dash21", 406409, 16, 16);
			ReplaceTex("supersonic", "ss_dash22", "GayMale", "s_dash23", 406410, 16, 16);
			ReplaceTex("supersonic", "ss_dash23", "GayMale", "s_dash23", 406411, 16, 16);
			ReplacePVM("son_eff", "Gay")
		}

		if (Pride == Genderfluid)
		{
			ReplaceTex("supersonic", "ss_dash01", "Genderfluid", "s_dash01", 406412, 16, 16);
			ReplaceTex("supersonic", "ss_dash02", "Genderfluid", "s_dash02", 406390, 16, 16);
			ReplaceTex("supersonic", "ss_dash03", "Genderfluid", "s_dash03", 406391, 16, 16);
			ReplaceTex("supersonic", "ss_dash04", "Genderfluid", "s_dash04", 406392, 16, 16);
			ReplaceTex("supersonic", "ss_dash05", "Genderfluid", "s_dash05", 406393, 16, 16);
			ReplaceTex("supersonic", "ss_dash06", "Genderfluid", "s_dash06", 406394, 16, 16);
			ReplaceTex("supersonic", "ss_dash07", "Genderfluid", "s_dash07", 406395, 16, 16);
			ReplaceTex("supersonic", "ss_dash08", "Genderfluid", "s_dash08", 406396, 16, 16);
			ReplaceTex("supersonic", "ss_dash09", "Genderfluid", "s_dash09", 406397, 16, 16);
			ReplaceTex("supersonic", "ss_dash10", "Genderfluid", "s_dash10", 406398, 16, 16);
			ReplaceTex("supersonic", "ss_dash11", "Genderfluid", "s_dash11", 406399, 16, 16);
			ReplaceTex("supersonic", "ss_dash12", "Genderfluid", "s_dash12", 406400, 16, 16);
			ReplaceTex("supersonic", "ss_dash13", "Genderfluid", "s_dash13", 406401, 16, 16);
			ReplaceTex("supersonic", "ss_dash14", "Genderfluid", "s_dash14", 406402, 16, 16);
			ReplaceTex("supersonic", "ss_dash15", "Genderfluid", "s_dash15", 406403, 16, 16);
			ReplaceTex("supersonic", "ss_dash16", "Genderfluid", "s_dash16", 406404, 16, 16);
			ReplaceTex("supersonic", "ss_dash17", "Genderfluid", "s_dash17", 406405, 16, 16);
			ReplaceTex("supersonic", "ss_dash18", "Genderfluid", "s_dash18", 406406, 16, 16);
			ReplaceTex("supersonic", "ss_dash19", "Genderfluid", "s_dash19", 406407, 16, 16);
			ReplaceTex("supersonic", "ss_dash20", "Genderfluid", "s_dash20", 406408, 16, 16);
			ReplaceTex("supersonic", "ss_dash21", "Genderfluid", "s_dash21", 406409, 16, 16);
			ReplaceTex("supersonic", "ss_dash22", "Genderfluid", "s_dash23", 406410, 16, 16);
			ReplaceTex("supersonic", "ss_dash23", "Genderfluid", "s_dash23", 406411, 16, 16);
			ReplacePVM("son_eff", "Genderfluid")
		}

		if (Pride == Genderqueer)
		{
			ReplaceTex("supersonic", "ss_dash01", "Genderqueer", "s_dash01", 406412, 16, 16);
			ReplaceTex("supersonic", "ss_dash02", "Genderqueer", "s_dash02", 406390, 16, 16);
			ReplaceTex("supersonic", "ss_dash03", "Genderqueer", "s_dash03", 406391, 16, 16);
			ReplaceTex("supersonic", "ss_dash04", "Genderqueer", "s_dash04", 406392, 16, 16);
			ReplaceTex("supersonic", "ss_dash05", "Genderqueer", "s_dash05", 406393, 16, 16);
			ReplaceTex("supersonic", "ss_dash06", "Genderqueer", "s_dash06", 406394, 16, 16);
			ReplaceTex("supersonic", "ss_dash07", "Genderqueer", "s_dash07", 406395, 16, 16);
			ReplaceTex("supersonic", "ss_dash08", "Genderqueer", "s_dash08", 406396, 16, 16);
			ReplaceTex("supersonic", "ss_dash09", "Genderqueer", "s_dash09", 406397, 16, 16);
			ReplaceTex("supersonic", "ss_dash10", "Genderqueer", "s_dash10", 406398, 16, 16);
			ReplaceTex("supersonic", "ss_dash11", "Genderqueer", "s_dash11", 406399, 16, 16);
			ReplaceTex("supersonic", "ss_dash12", "Genderqueer", "s_dash12", 406400, 16, 16);
			ReplaceTex("supersonic", "ss_dash13", "Genderqueer", "s_dash13", 406401, 16, 16);
			ReplaceTex("supersonic", "ss_dash14", "Genderqueer", "s_dash14", 406402, 16, 16);
			ReplaceTex("supersonic", "ss_dash15", "Genderqueer", "s_dash15", 406403, 16, 16);
			ReplaceTex("supersonic", "ss_dash16", "Genderqueer", "s_dash16", 406404, 16, 16);
			ReplaceTex("supersonic", "ss_dash17", "Genderqueer", "s_dash17", 406405, 16, 16);
			ReplaceTex("supersonic", "ss_dash18", "Genderqueer", "s_dash18", 406406, 16, 16);
			ReplaceTex("supersonic", "ss_dash19", "Genderqueer", "s_dash19", 406407, 16, 16);
			ReplaceTex("supersonic", "ss_dash20", "Genderqueer", "s_dash20", 406408, 16, 16);
			ReplaceTex("supersonic", "ss_dash21", "Genderqueer", "s_dash21", 406409, 16, 16);
			ReplaceTex("supersonic", "ss_dash22", "Genderqueer", "s_dash23", 406410, 16, 16);
			ReplaceTex("supersonic", "ss_dash23", "Genderqueer", "s_dash23", 406411, 16, 16);
			ReplacePVM("son_eff", "Genderqueer")
		}

		if (Pride == Intersex)
		{
			ReplaceTex("supersonic", "ss_dash01", "Intersex", "s_dash01", 406412, 16, 16);
			ReplaceTex("supersonic", "ss_dash02", "Intersex", "s_dash02", 406390, 16, 16);
			ReplaceTex("supersonic", "ss_dash03", "Intersex", "s_dash03", 406391, 16, 16);
			ReplaceTex("supersonic", "ss_dash04", "Intersex", "s_dash04", 406392, 16, 16);
			ReplaceTex("supersonic", "ss_dash05", "Intersex", "s_dash05", 406393, 16, 16);
			ReplaceTex("supersonic", "ss_dash06", "Intersex", "s_dash06", 406394, 16, 16);
			ReplaceTex("supersonic", "ss_dash07", "Intersex", "s_dash07", 406395, 16, 16);
			ReplaceTex("supersonic", "ss_dash08", "Intersex", "s_dash08", 406396, 16, 16);
			ReplaceTex("supersonic", "ss_dash09", "Intersex", "s_dash09", 406397, 16, 16);
			ReplaceTex("supersonic", "ss_dash10", "Intersex", "s_dash10", 406398, 16, 16);
			ReplaceTex("supersonic", "ss_dash11", "Intersex", "s_dash11", 406399, 16, 16);
			ReplaceTex("supersonic", "ss_dash12", "Intersex", "s_dash12", 406400, 16, 16);
			ReplaceTex("supersonic", "ss_dash13", "Intersex", "s_dash13", 406401, 16, 16);
			ReplaceTex("supersonic", "ss_dash14", "Intersex", "s_dash14", 406402, 16, 16);
			ReplaceTex("supersonic", "ss_dash15", "Intersex", "s_dash15", 406403, 16, 16);
			ReplaceTex("supersonic", "ss_dash16", "Intersex", "s_dash16", 406404, 16, 16);
			ReplaceTex("supersonic", "ss_dash17", "Intersex", "s_dash17", 406405, 16, 16);
			ReplaceTex("supersonic", "ss_dash18", "Intersex", "s_dash18", 406406, 16, 16);
			ReplaceTex("supersonic", "ss_dash19", "Intersex", "s_dash19", 406407, 16, 16);
			ReplaceTex("supersonic", "ss_dash20", "Intersex", "s_dash20", 406408, 16, 16);
			ReplaceTex("supersonic", "ss_dash21", "Intersex", "s_dash21", 406409, 16, 16);
			ReplaceTex("supersonic", "ss_dash22", "Intersex", "s_dash23", 406410, 16, 16);
			ReplaceTex("supersonic", "ss_dash23", "Intersex", "s_dash23", 406411, 16, 16);
			ReplacePVM("son_eff", "Intersex")
		}

		if (Pride == Lesbian)
		{
			ReplaceTex("supersonic", "ss_dash01", "Lesbian", "s_dash01", 406412, 16, 16);
			ReplaceTex("supersonic", "ss_dash02", "Lesbian", "s_dash02", 406390, 16, 16);
			ReplaceTex("supersonic", "ss_dash03", "Lesbian", "s_dash03", 406391, 16, 16);
			ReplaceTex("supersonic", "ss_dash04", "Lesbian", "s_dash04", 406392, 16, 16);
			ReplaceTex("supersonic", "ss_dash05", "Lesbian", "s_dash05", 406393, 16, 16);
			ReplaceTex("supersonic", "ss_dash06", "Lesbian", "s_dash06", 406394, 16, 16);
			ReplaceTex("supersonic", "ss_dash07", "Lesbian", "s_dash07", 406395, 16, 16);
			ReplaceTex("supersonic", "ss_dash08", "Lesbian", "s_dash08", 406396, 16, 16);
			ReplaceTex("supersonic", "ss_dash09", "Lesbian", "s_dash09", 406397, 16, 16);
			ReplaceTex("supersonic", "ss_dash10", "Lesbian", "s_dash10", 406398, 16, 16);
			ReplaceTex("supersonic", "ss_dash11", "Lesbian", "s_dash11", 406399, 16, 16);
			ReplaceTex("supersonic", "ss_dash12", "Lesbian", "s_dash12", 406400, 16, 16);
			ReplaceTex("supersonic", "ss_dash13", "Lesbian", "s_dash13", 406401, 16, 16);
			ReplaceTex("supersonic", "ss_dash14", "Lesbian", "s_dash14", 406402, 16, 16);
			ReplaceTex("supersonic", "ss_dash15", "Lesbian", "s_dash15", 406403, 16, 16);
			ReplaceTex("supersonic", "ss_dash16", "Lesbian", "s_dash16", 406404, 16, 16);
			ReplaceTex("supersonic", "ss_dash17", "Lesbian", "s_dash17", 406405, 16, 16);
			ReplaceTex("supersonic", "ss_dash18", "Lesbian", "s_dash18", 406406, 16, 16);
			ReplaceTex("supersonic", "ss_dash19", "Lesbian", "s_dash19", 406407, 16, 16);
			ReplaceTex("supersonic", "ss_dash20", "Lesbian", "s_dash20", 406408, 16, 16);
			ReplaceTex("supersonic", "ss_dash21", "Lesbian", "s_dash21", 406409, 16, 16);
			ReplaceTex("supersonic", "ss_dash22", "Lesbian", "s_dash23", 406410, 16, 16);
			ReplaceTex("supersonic", "ss_dash23", "Lesbian", "s_dash23", 406411, 16, 16);
			ReplacePVM("son_eff", "Lesbian")
		}

		if (Pride == LipstickLes)
		{
			ReplaceTex("supersonic", "ss_dash01", "LipstickLesbian", "s_dash01", 406412, 16, 16);
			ReplaceTex("supersonic", "ss_dash02", "LipstickLesbian", "s_dash02", 406390, 16, 16);
			ReplaceTex("supersonic", "ss_dash03", "LipstickLesbian", "s_dash03", 406391, 16, 16);
			ReplaceTex("supersonic", "ss_dash04", "LipstickLesbian", "s_dash04", 406392, 16, 16);
			ReplaceTex("supersonic", "ss_dash05", "LipstickLesbian", "s_dash05", 406393, 16, 16);
			ReplaceTex("supersonic", "ss_dash06", "LipstickLesbian", "s_dash06", 406394, 16, 16);
			ReplaceTex("supersonic", "ss_dash07", "LipstickLesbian", "s_dash07", 406395, 16, 16);
			ReplaceTex("supersonic", "ss_dash08", "LipstickLesbian", "s_dash08", 406396, 16, 16);
			ReplaceTex("supersonic", "ss_dash09", "LipstickLesbian", "s_dash09", 406397, 16, 16);
			ReplaceTex("supersonic", "ss_dash10", "LipstickLesbian", "s_dash10", 406398, 16, 16);
			ReplaceTex("supersonic", "ss_dash11", "LipstickLesbian", "s_dash11", 406399, 16, 16);
			ReplaceTex("supersonic", "ss_dash12", "LipstickLesbian", "s_dash12", 406400, 16, 16);
			ReplaceTex("supersonic", "ss_dash13", "LipstickLesbian", "s_dash13", 406401, 16, 16);
			ReplaceTex("supersonic", "ss_dash14", "LipstickLesbian", "s_dash14", 406402, 16, 16);
			ReplaceTex("supersonic", "ss_dash15", "LipstickLesbian", "s_dash15", 406403, 16, 16);
			ReplaceTex("supersonic", "ss_dash16", "LipstickLesbian", "s_dash16", 406404, 16, 16);
			ReplaceTex("supersonic", "ss_dash17", "LipstickLesbian", "s_dash17", 406405, 16, 16);
			ReplaceTex("supersonic", "ss_dash18", "LipstickLesbian", "s_dash18", 406406, 16, 16);
			ReplaceTex("supersonic", "ss_dash19", "LipstickLesbian", "s_dash19", 406407, 16, 16);
			ReplaceTex("supersonic", "ss_dash20", "LipstickLesbian", "s_dash20", 406408, 16, 16);
			ReplaceTex("supersonic", "ss_dash21", "LipstickLesbian", "s_dash21", 406409, 16, 16);
			ReplaceTex("supersonic", "ss_dash22", "LipstickLesbian", "s_dash23", 406410, 16, 16);
			ReplaceTex("supersonic", "ss_dash23", "LipstickLesbian", "s_dash23", 406411, 16, 16);
			ReplacePVM("son_eff", "LipstickLesbian")
		}

		if (Pride == NonBinary)
		{
			ReplaceTex("supersonic", "ss_dash01", "NonBinary", "s_dash01", 406412, 16, 16);
			ReplaceTex("supersonic", "ss_dash02", "NonBinary", "s_dash02", 406390, 16, 16);
			ReplaceTex("supersonic", "ss_dash03", "NonBinary", "s_dash03", 406391, 16, 16);
			ReplaceTex("supersonic", "ss_dash04", "NonBinary", "s_dash04", 406392, 16, 16);
			ReplaceTex("supersonic", "ss_dash05", "NonBinary", "s_dash05", 406393, 16, 16);
			ReplaceTex("supersonic", "ss_dash06", "NonBinary", "s_dash06", 406394, 16, 16);
			ReplaceTex("supersonic", "ss_dash07", "NonBinary", "s_dash07", 406395, 16, 16);
			ReplaceTex("supersonic", "ss_dash08", "NonBinary", "s_dash08", 406396, 16, 16);
			ReplaceTex("supersonic", "ss_dash09", "NonBinary", "s_dash09", 406397, 16, 16);
			ReplaceTex("supersonic", "ss_dash10", "NonBinary", "s_dash10", 406398, 16, 16);
			ReplaceTex("supersonic", "ss_dash11", "NonBinary", "s_dash11", 406399, 16, 16);
			ReplaceTex("supersonic", "ss_dash12", "NonBinary", "s_dash12", 406400, 16, 16);
			ReplaceTex("supersonic", "ss_dash13", "NonBinary", "s_dash13", 406401, 16, 16);
			ReplaceTex("supersonic", "ss_dash14", "NonBinary", "s_dash14", 406402, 16, 16);
			ReplaceTex("supersonic", "ss_dash15", "NonBinary", "s_dash15", 406403, 16, 16);
			ReplaceTex("supersonic", "ss_dash16", "NonBinary", "s_dash16", 406404, 16, 16);
			ReplaceTex("supersonic", "ss_dash17", "NonBinary", "s_dash17", 406405, 16, 16);
			ReplaceTex("supersonic", "ss_dash18", "NonBinary", "s_dash18", 406406, 16, 16);
			ReplaceTex("supersonic", "ss_dash19", "NonBinary", "s_dash19", 406407, 16, 16);
			ReplaceTex("supersonic", "ss_dash20", "NonBinary", "s_dash20", 406408, 16, 16);
			ReplaceTex("supersonic", "ss_dash21", "NonBinary", "s_dash21", 406409, 16, 16);
			ReplaceTex("supersonic", "ss_dash22", "NonBinary", "s_dash23", 406410, 16, 16);
			ReplaceTex("supersonic", "ss_dash23", "NonBinary", "s_dash23", 406411, 16, 16);
			ReplacePVM("son_eff", "NonBinary")
		}

		if (Pride == Pansexual)
		{
			ReplaceTex("supersonic", "ss_dash01", "Pansexual", "s_dash01", 406412, 16, 16);
			ReplaceTex("supersonic", "ss_dash02", "Pansexual", "s_dash02", 406390, 16, 16);
			ReplaceTex("supersonic", "ss_dash03", "Pansexual", "s_dash03", 406391, 16, 16);
			ReplaceTex("supersonic", "ss_dash04", "Pansexual", "s_dash04", 406392, 16, 16);
			ReplaceTex("supersonic", "ss_dash05", "Pansexual", "s_dash05", 406393, 16, 16);
			ReplaceTex("supersonic", "ss_dash06", "Pansexual", "s_dash06", 406394, 16, 16);
			ReplaceTex("supersonic", "ss_dash07", "Pansexual", "s_dash07", 406395, 16, 16);
			ReplaceTex("supersonic", "ss_dash08", "Pansexual", "s_dash08", 406396, 16, 16);
			ReplaceTex("supersonic", "ss_dash09", "Pansexual", "s_dash09", 406397, 16, 16);
			ReplaceTex("supersonic", "ss_dash10", "Pansexual", "s_dash10", 406398, 16, 16);
			ReplaceTex("supersonic", "ss_dash11", "Pansexual", "s_dash11", 406399, 16, 16);
			ReplaceTex("supersonic", "ss_dash12", "Pansexual", "s_dash12", 406400, 16, 16);
			ReplaceTex("supersonic", "ss_dash13", "Pansexual", "s_dash13", 406401, 16, 16);
			ReplaceTex("supersonic", "ss_dash14", "Pansexual", "s_dash14", 406402, 16, 16);
			ReplaceTex("supersonic", "ss_dash15", "Pansexual", "s_dash15", 406403, 16, 16);
			ReplaceTex("supersonic", "ss_dash16", "Pansexual", "s_dash16", 406404, 16, 16);
			ReplaceTex("supersonic", "ss_dash17", "Pansexual", "s_dash17", 406405, 16, 16);
			ReplaceTex("supersonic", "ss_dash18", "Pansexual", "s_dash18", 406406, 16, 16);
			ReplaceTex("supersonic", "ss_dash19", "Pansexual", "s_dash19", 406407, 16, 16);
			ReplaceTex("supersonic", "ss_dash20", "Pansexual", "s_dash20", 406408, 16, 16);
			ReplaceTex("supersonic", "ss_dash21", "Pansexual", "s_dash21", 406409, 16, 16);
			ReplaceTex("supersonic", "ss_dash22", "Pansexual", "s_dash23", 406410, 16, 16);
			ReplaceTex("supersonic", "ss_dash23", "Pansexual", "s_dash23", 406411, 16, 16);
			ReplacePVM("son_eff", "Pansexual")
		}

		if (Pride == Polysexual)
		{
			ReplaceTex("supersonic", "ss_dash01", "Polysexual", "s_dash01", 406412, 16, 16);
			ReplaceTex("supersonic", "ss_dash02", "Polysexual", "s_dash02", 406390, 16, 16);
			ReplaceTex("supersonic", "ss_dash03", "Polysexual", "s_dash03", 406391, 16, 16);
			ReplaceTex("supersonic", "ss_dash04", "Polysexual", "s_dash04", 406392, 16, 16);
			ReplaceTex("supersonic", "ss_dash05", "Polysexual", "s_dash05", 406393, 16, 16);
			ReplaceTex("supersonic", "ss_dash06", "Polysexual", "s_dash06", 406394, 16, 16);
			ReplaceTex("supersonic", "ss_dash07", "Polysexual", "s_dash07", 406395, 16, 16);
			ReplaceTex("supersonic", "ss_dash08", "Polysexual", "s_dash08", 406396, 16, 16);
			ReplaceTex("supersonic", "ss_dash09", "Polysexual", "s_dash09", 406397, 16, 16);
			ReplaceTex("supersonic", "ss_dash10", "Polysexual", "s_dash10", 406398, 16, 16);
			ReplaceTex("supersonic", "ss_dash11", "Polysexual", "s_dash11", 406399, 16, 16);
			ReplaceTex("supersonic", "ss_dash12", "Polysexual", "s_dash12", 406400, 16, 16);
			ReplaceTex("supersonic", "ss_dash13", "Polysexual", "s_dash13", 406401, 16, 16);
			ReplaceTex("supersonic", "ss_dash14", "Polysexual", "s_dash14", 406402, 16, 16);
			ReplaceTex("supersonic", "ss_dash15", "Polysexual", "s_dash15", 406403, 16, 16);
			ReplaceTex("supersonic", "ss_dash16", "Polysexual", "s_dash16", 406404, 16, 16);
			ReplaceTex("supersonic", "ss_dash17", "Polysexual", "s_dash17", 406405, 16, 16);
			ReplaceTex("supersonic", "ss_dash18", "Polysexual", "s_dash18", 406406, 16, 16);
			ReplaceTex("supersonic", "ss_dash19", "Polysexual", "s_dash19", 406407, 16, 16);
			ReplaceTex("supersonic", "ss_dash20", "Polysexual", "s_dash20", 406408, 16, 16);
			ReplaceTex("supersonic", "ss_dash21", "Polysexual", "s_dash21", 406409, 16, 16);
			ReplaceTex("supersonic", "ss_dash22", "Polysexual", "s_dash23", 406410, 16, 16);
			ReplaceTex("supersonic", "ss_dash23", "Polysexual", "s_dash23", 406411, 16, 16);
			ReplacePVM("son_eff", "Polysexual")
		}

		if (Pride == Trans)
		{
			ReplaceTex("supersonic", "ss_dash01", "Trans", "s_dash01", 406412, 16, 16);
			ReplaceTex("supersonic", "ss_dash02", "Trans", "s_dash02", 406390, 16, 16);
			ReplaceTex("supersonic", "ss_dash03", "Trans", "s_dash03", 406391, 16, 16);
			ReplaceTex("supersonic", "ss_dash04", "Trans", "s_dash04", 406392, 16, 16);
			ReplaceTex("supersonic", "ss_dash05", "Trans", "s_dash05", 406393, 16, 16);
			ReplaceTex("supersonic", "ss_dash06", "Trans", "s_dash06", 406394, 16, 16);
			ReplaceTex("supersonic", "ss_dash07", "Trans", "s_dash07", 406395, 16, 16);
			ReplaceTex("supersonic", "ss_dash08", "Trans", "s_dash08", 406396, 16, 16);
			ReplaceTex("supersonic", "ss_dash09", "Trans", "s_dash09", 406397, 16, 16);
			ReplaceTex("supersonic", "ss_dash10", "Trans", "s_dash10", 406398, 16, 16);
			ReplaceTex("supersonic", "ss_dash11", "Trans", "s_dash11", 406399, 16, 16);
			ReplaceTex("supersonic", "ss_dash12", "Trans", "s_dash12", 406400, 16, 16);
			ReplaceTex("supersonic", "ss_dash13", "Trans", "s_dash13", 406401, 16, 16);
			ReplaceTex("supersonic", "ss_dash14", "Trans", "s_dash14", 406402, 16, 16);
			ReplaceTex("supersonic", "ss_dash15", "Trans", "s_dash15", 406403, 16, 16);
			ReplaceTex("supersonic", "ss_dash16", "Trans", "s_dash16", 406404, 16, 16);
			ReplaceTex("supersonic", "ss_dash17", "Trans", "s_dash17", 406405, 16, 16);
			ReplaceTex("supersonic", "ss_dash18", "Trans", "s_dash18", 406406, 16, 16);
			ReplaceTex("supersonic", "ss_dash19", "Trans", "s_dash19", 406407, 16, 16);
			ReplaceTex("supersonic", "ss_dash20", "Trans", "s_dash20", 406408, 16, 16);
			ReplaceTex("supersonic", "ss_dash21", "Trans", "s_dash21", 406409, 16, 16);
			ReplaceTex("supersonic", "ss_dash22", "Trans", "s_dash23", 406410, 16, 16);
			ReplaceTex("supersonic", "ss_dash23", "Trans", "s_dash23", 406411, 16, 16);
			ReplacePVM("son_eff", "Trans")
		}
	}
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}