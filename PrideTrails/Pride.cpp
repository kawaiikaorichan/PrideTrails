#include "pch.h"
#include "IniFile.hpp"
#include "Trails.h"

//Macros
#define ReplacePVM(a, b) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" b ".PVM");

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
			ReplacePVM("son_eff", "LGBT")
		}

		if (Pride == Agender)
		{
			ReplacePVM("son_eff", "Agender")
		}

		if (Pride == Aromantic)
		{
			ReplacePVM("son_eff", "Aromantic")
		}

		if (Pride == Asexual)
		{
			ReplacePVM("son_eff", "Asexual")
		}

		if (Pride == Bear)
		{
			ReplacePVM("son_eff", "Bear")
		}

		if (Pride == Bigender)
		{
			ReplacePVM("son_eff", "Bigender")
		}

		if (Pride == Bisexual)
		{
			ReplacePVM("son_eff", "Bisexual")
		}

		if (Pride == Demisexual)
		{
			ReplacePVM("son_eff", "Demisexual")
		}

		if (Pride == GayMale)
		{
			ReplacePVM("son_eff", "Gay")
		}

		if (Pride == Genderfluid)
		{
			ReplacePVM("son_eff", "Genderfluid")
		}

		if (Pride == Genderqueer)
		{
			ReplacePVM("son_eff", "Genderqueer")
		}

		if (Pride == Intersex)
		{
			ReplacePVM("son_eff", "Intersex")
		}

		if (Pride == Lesbian)
		{
			ReplacePVM("son_eff", "Lesbian")
		}

		if (Pride == LipstickLes)
		{
			ReplacePVM("son_eff", "LipstickLesbian")
		}

		if (Pride == NonBinary)
		{
			ReplacePVM("son_eff", "NonBinary")
		}

		if (Pride == Pansexual)
		{
			ReplacePVM("son_eff", "Pansexual")
		}

		if (Pride == Polysexual)
		{
			ReplacePVM("son_eff", "Polysexual")
		}

		if (Pride == Trans)
		{
			ReplacePVM("son_eff", "Trans")
		}
	}
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}