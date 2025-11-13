// 函数: sub_63c090
// 地址: 0x63c090
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie

if (data_8c4157 != 0)
    CookieCheckFunction("xsave\")
    return "xsave\"

if (data_19e3a98 == 0)
    uint8_t pszPath[0x104]
    HRESULT eax_2 = SHGetFolderPathA(nullptr, 0x801a, nullptr, 0, &pszPath)
    
    if (eax_2 s< 0)
        sub_63b870(eax_2, &data_801800, "Halt", "C:\x\ax2017\Engine\xPlatformPC.cpp", 0x140, 
            "XGetSaveGameFolder")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t var_110_2 = *(data_cf65b8 + 8)
    uint8_t (* var_114_1)[0x104] = &pszPath
    sub_63bb20(&data_19e3a98, "%s\TempleGates\%s\")

CookieCheckFunction(&data_19e3a98)
return &data_19e3a98
