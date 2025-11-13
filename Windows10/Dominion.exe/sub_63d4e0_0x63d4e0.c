// 函数: sub_63d4e0
// 地址: 0x63d4e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* result = *arg1
int32_t var_8
char const* const ecx

if (result == 0 || *result == 0)
    char const* const var_4_1 = "XStringMagicDataStructFromCharPtr"
    var_8 = 0x1c
    ecx = "!str->IsEmpty()"
else
    result = &result[0xfffffff0]
    
    if (*result == 0xfafafafa)
        return result
    
    char const* const var_4 = "XStringMagicDataStructFromCharPtr"
    var_8 = 0x20
    ecx = "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Engine\xString.cpp", var_8, 
    "XStringMagicDataStructFromCharPtr")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
