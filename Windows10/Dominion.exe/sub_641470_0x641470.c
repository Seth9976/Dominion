// 函数: sub_641470
// 地址: 0x641470
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_687730(0xd4)
int32_t eax_3
int32_t ecx
eax_3, ecx = memset(eax_2, 0, 0xd4)
arg1[0xe] = eax_2
char const* const var_4c_1
int32_t var_48
char const* const var_44
char* ecx_1
char const* const edx

if (arg1[8] != 0)
    int32_t var_44_1 = ecx
    sub_6d1af0(eax_2, *arg1)
    int32_t* eax_4 = sub_5af880(arg1[8])
    int32_t var_44_2 = arg1[0xd]
    int32_t var_30 = 0
    int32_t* eax_5 = *eax_4
    int32_t var_2c_1 = 0
    int32_t var_24_1 = eax_5[1]
    int32_t var_28_1 = *eax_5
    var_30.o = var_30.o
    eax_3 = sub_640590(eax_2 + 0x80, &var_30, arg1[0xb] * arg1[0xa], arg1[0xc], var_44_2)
    int32_t ecx_6 = arg1[0xa]
    
    if (ecx_6 != 0)
        if (*(eax_2 + 0xc8) == 0)
            int32_t ecx_8 = (ecx_6 - 1) | (ecx_6 - 1) u>> 1
            int32_t ecx_9 = ecx_8 | ecx_8 u>> 2
            int32_t ecx_10 = ecx_9 | ecx_9 u>> 4
            int32_t ecx_11 = ecx_10 | ecx_10 u>> 8
            int32_t esi_3 = ecx_11 u>> 0x10 | ecx_11
            int32_t* result = sub_64c020((esi_3 << 2) + 4)
            *(eax_2 + 0xcc) = esi_3
            *(eax_2 + 0xc8) = result
            CookieCheckFunction(result)
            return result
        
        var_44 = "XMap<struct TTFKey,struct TTFGlyph>::SetNumBuckets"
        var_48 = 0x74
        ecx_1 = "mNodeBuckets == NULL"
    else
        var_44 = "XMap<struct TTFKey,struct TTFGlyph>::SetNumBuckets"
        var_48 = 0x73
        ecx_1 = "bucketCount > 0"
    
    edx = &data_801800
    var_4c_1 = "C:\x\ax2017\Engine\xMap.h"
else
    var_44 = "TruetypeLoad"
    var_48 = 0x201
    var_4c_1 = "C:\x\ax2017\Engine\TTFont.cpp"
    edx = "Truetype fonts must have a sidecar file with an associated texture."
    ecx_1 = "def.font.texture"

sub_63b870(eax_3, edx, ecx_1, var_4c_1, var_48, var_44)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
