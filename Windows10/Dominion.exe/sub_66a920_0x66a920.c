// 函数: sub_66a920
// 地址: 0x66a920
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t eax_4 = *(arg3 + 0x15f8) - 1
char const* const var_23c
int32_t var_238
char const* const var_234
uint32_t var_214_1
char* ecx_1
uint32_t esi_1

switch (eax_4)
    case 0
        __builtin_memcpy(arg2, &data_8ca650, 0x12c)
        esi_1 = 0xf
        var_214_1 = 0xf
    case 1
        __builtin_memcpy(arg2, &data_8ca3f0, 0x12c)
        esi_1 = 0xf
        var_214_1 = 0xf
    case 2
        __builtin_memcpy(arg2, &data_8ca848, 0x17c)
        esi_1 = 0x13
        var_214_1 = 0x13
    case 4
        __builtin_memcpy(arg2, &data_8c9fc0, 0x244)
        esi_1 = 0x1d
        var_214_1 = 0x1d
    case 5
        __builtin_memcpy(arg2, &data_8ca360, 0x8c)
        esi_1 = 7
        var_214_1 = 7
    case 6
        __builtin_memcpy(arg2, &data_8c9ef8, 0xc8)
        esi_1 = 0xa
        var_214_1 = 0xa
    case 7
        __builtin_memcpy(arg2, &data_8ca520, 0x8c)
        esi_1 = 7
        var_214_1 = 7
    case 8
        __builtin_memcpy(arg2, &data_8ca5b0, 0xa0)
        esi_1 = 8
        var_214_1 = 8
    case 9
        __builtin_memcpy(arg2, &data_8ca780, 0xc8)
        int32_t* ecx = *(arg3 + 0x1478)
        esi_1 = 0xa
        var_214_1 = 0xa
        
        if (ecx != 0)
            if (ecx[1] != 0x23)
                var_234 = "SpineDefGet"
                var_238 = 0x1bd
                var_23c = "C:\x\ax2017\Engine\Spine.cpp"
                ecx_1 = "assetPtr->assetType == ASSET_TYPE_SPINE"
                goto label_66ac3d
            
            int32_t ecx_2 = 0
            void* eax_6 = *(sub_5af880(ecx) + 0x28)
            int32_t edx_1 = *(eax_6 + 0x28)
            int32_t var_21c_1 = edx_1
            
            if (edx_1 s>= 0x76)
                edx_1 = 0x76
                var_21c_1 = 0x76
            label_66aa2d:
                int32_t esi_2 = *(eax_6 + 0x2c)
                int32_t var_210[0x81]
                
                do
                    var_210[ecx_2] = *(*(esi_2 + (ecx_2 << 2)) + 4)
                    ecx_2 += 1
                while (ecx_2 s< edx_1)
                
                char** edi_3 = arg2 + 0xc8
                int32_t edx_3 = 0
                var_214_1 = var_21c_1 + 0xa
                
                do
                    int32_t eax_10 = var_210[edx_3]
                    char** ecx_5 = edi_3
                    edi_3 = &edi_3[5]
                    ecx_5[4] = edx_3
                    edx_3 += 1
                    *ecx_5 = "Slot"
                    ecx_5[2] = eax_10
                    ecx_5[1] = 0x111
                    ecx_5[3] = 5
                while (edx_3 s< var_21c_1)
                
                esi_1 = var_214_1
            else if (edx_1 s> 0)
                goto label_66aa2d
    case 0xa
        __builtin_memcpy(arg2, &data_8ca208, 0x154)
        esi_1 = 0x11
        var_214_1 = 0x11
    default
        var_234 = "GetPropDefs"
        var_238 = 0x3e2a
        var_23c = "C:\x\ax2017\Engine\UI2.cpp"
        ecx_1 = "Halt"
    label_66ac3d:
        sub_63b870(eax_4, &data_801800, ecx_1, var_23c, var_238, var_234)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

if (arg4 != 0)
    *arg4 = esi_1

void* ecx_3 = *(arg3 + 0x15c8)

if (ecx_3 == 0)
label_66abf8:
    int128_t* edx_4 = arg2 + esi_1 * 0x14
    var_214_1 = esi_1 + 1
    *edx_4 = data_8c9e90.o
    edx_4[1].d = data_8c9ea0
    CookieCheckFunction(var_214_1)
    return var_214_1

int32_t ecx_4 = *(ecx_3 + 0x10)
int32_t var_218_1 = ecx_4
int32_t edx_2

if (ecx_4 s>= 3)
    ecx_4 = 3
    edx_2 = 0
    var_218_1 = 3
else
    if (ecx_4 == 0)
        goto label_66abf8
    
    edx_2 = 0
    
    if (ecx_4 s<= 0)
        CookieCheckFunction(var_214_1)
        return var_214_1

void* ebx_2 = arg2 + esi_1 * 0x14 + 0x24
uint32_t esi_6 = ecx_4 * 5 + esi_1

do
    void* edi_12 = ebx_2 - 0x24
    ebx_2 += 0x64
    __builtin_memcpy(edi_12, &data_8c9e90, 0x64)
    *(ebx_2 - 0x78) = edx_2
    *(ebx_2 - 0x64) = edx_2
    *(ebx_2 - 0x50) = edx_2
    *(ebx_2 - 0x3c) = edx_2
    *(ebx_2 - 0x28) = edx_2
    edx_2 += 1
while (edx_2 s< var_218_1)

CookieCheckFunction(esi_6)
return esi_6
