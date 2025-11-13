// 函数: sub_540dc0
// 地址: 0x540dc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_3c = arg1
int32_t var_38[0xc]
int32_t eax_3

for (int32_t i = 0; i s< 0xc; i += 4)
    eax_3 = i + 0xd34
    *(&var_38 + (i << 2)) = _mm_unpacklo_epi32(
        _mm_unpacklo_epi32(zx.o(i + 0xd31), zx.q(i + 0xd33)), 
        _mm_unpacklo_epi32(zx.o(i + 0xd32), zx.q(eax_3)))

if (arg2 != 3)
    sub_63b870(eax_3, &data_801800, "numEntries == 3", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Nocturne.cpp", 0x18, "Druid_SetupGenerate")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_4 = var_3c
int32_t ebx = 0
int32_t ecx_2 = 0xc

for (int32_t i_1 = 0; i_1 s< 3; i_1 += 1)
    int32_t esi_2 = *(eax_4 + (i_1 << 2))
    
    if (esi_2 != 0)
        int32_t eax_5 = 0
        
        if (ecx_2 s> 0)
            do
                if (var_38[eax_5] == esi_2)
                    int32_t eax_6 = (&var_3c)[ecx_2]
                    ecx_2 -= 1
                    var_38[eax_5] = eax_6
                    break
                
                eax_5 += 1
            while (eax_5 s< ecx_2)
        
        eax_4 = var_3c
        ebx += 1

sub_63eda0(3 - ebx, &var_38, data_cce9bc, ecx_2, 3 - ebx)

if (ebx s< 3)
    __builtin_memcpy(var_3c + (ebx << 2), &var_38[ebx], (3 - ebx) << 2)

CookieCheckFunction(3)
return 3
