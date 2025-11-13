// 函数: sub_5a8680
// 地址: 0x5a8680
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_768540
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* ecx
int32_t* edx
ecx, edx = __chkstk(0x13cc)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = ecx
int32_t* var_1024 = esi
int32_t** var_1020 = arg1
memset(edx, 0, 0x215fe8)
int32_t* i_2 = arg1[1]

if (i_2 != 0)
    int32_t* i
    
    do
        i = *i_2
        _aligned_free(i_2)
        i_2 = i
    while (i != 0)
    esi = var_1024

*arg1 = 0
arg1[1] = 0
arg1[3] = 0
int32_t eax_3 = arg1[5]
arg1[5] = 0
sub_5ac7c0(&arg1[4], eax_3)
int32_t eax_4
int32_t edx_1
eax_4, edx_1 = __allmul(*esi, 0, 0x4c957f2d, 0x5851f42d)
void* ebx_1 = &edx[4]
*edx = eax_4 + 1
edx[1] = adc.d(edx_1, 0, eax_4 u>= 0xffffffff)
edx[2] = 1
edx[3] = 0
sub_5a44a0(esi)
void var_13dc
int32_t eax_7 = sub_5a6f50(&var_13dc, esi[3], edx, &var_13dc)
void var_120c
sub_5a6220(eax_7, &var_120c, edx, __builtin_memcpy(&var_120c, eax_7, 0x1d0), edx.w, ebx_1, edx)
int32_t i_3 = 0x4000
int32_t i_4 = 0x4000
int32_t eax_8
int32_t i_1

do
    int64_t xmm0_1 = *ebx_1
    eax_8 = *(ebx_1 + 8)
    
    if (not(0 f< eax_8))
        int32_t var_24_6 = 1
        int32_t var_103c = xmm0_1.d
        int32_t var_1038_1 = xmm0_1:4.d
        eax_8 = sub_5a1010(eax_8, &var_103c, var_1020, 0.00999999978f, var_24_6)
        i_3 = i_4
    
    ebx_1 += 0xc
    i_1 = i_3
    i_3 -= 1
    i_4 = i_3
while (i_1 != 1)
sub_5a7660(eax_8, edx, var_1024, var_1020)
sub_5a5ed0(edx, var_1020.w, edx)
int32_t esi_4 = 0
void* eax_10 = &var_1024[6]
void* var_1020_1 = eax_10

while (true)
    int32_t edx_8 = *eax_10
    int32_t eax_11 = edx_8 - 1
    void* ecx_8 = eax_11 * 0x11c
    int32_t var_28_5
    char const* const var_24_11
    char* ecx_17
    
    if (*(ecx_8 + 0xb4a620) != edx_8)
        var_24_11 = "TerrainElementDefGet"
        var_28_5 = 0x9b0
        ecx_17 = "TERRAIN_ELEMENT_DEFS[idx].terrain == element"
    else
        int32_t eax_12 = *(ecx_8 + 0xb4a624)
        
        if (eax_12 == 0)
            sub_5a8290(esi_4, var_1020, edx_8, ecx_8 + 0xb4a628)
        label_5a88af:
            esi_4 += 1
            eax_10 = var_1020_1 + 4
            var_1020_1 = eax_10
            
            if (esi_4 s>= 3)
                break
            
            continue
        else
            eax_11 = eax_12 - 1
            
            if (eax_12 == 1)
                sub_5a7e40(ecx_8 + 0xb4a628, edx, var_1024, var_1020, edx_8, ecx_8 + 0xb4a628)
                goto label_5a88af
            
            var_24_11 = "PlaceTerrain"
            var_28_5 = 0xaf0
            ecx_17 = "Halt"
    
    sub_63b870(eax_11, &data_801800, ecx_17, "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp", var_28_5, 
        var_24_11)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* esi_5 = &edx[(edx[0x5d7f2] + 0x1eaa6) * 3]
int32_t eax_21
int32_t edx_11
edx_11:eax_21 = muls.dp.d(0x2aaaaaab, esi_5 - &edx[0x5bff2])
int32_t ebx_5 = (esi_5 - &edx[0x5bff2]) s/ 0xc
uint32_t result

if (ebx_5 s> 0x20)
    int32_t eax_23
    int32_t edx_14
    edx_14:eax_23 = sx.q(ebx_5)
    int32_t esi_7 = ebx_5 - ((eax_23 - edx_14) s>> 1)
    int32_t eax_26 = 0x7fffffff
    
    if (esi_7 s< 0x7fffffff)
        eax_26 = esi_7
    
    void* eax_29
    void var_1014
    
    if (esi_7 u<= 0x155)
        eax_29 = &var_1014
    else
        esi_7 = eax_26
        
        if (eax_26 u> 0x15555555 || eax_26 s<= 0)
        label_5a897e:
            eax_29 = nullptr
        label_5a8981:
            sub_7599be(eax_29)
            esi_7 = 0x155
            eax_29 = &var_1014
        else
            while (true)
                int32_t var_24_12 = 0x77c3a0
                eax_29 = operator new(esi_7 * 0xc)
                
                if (eax_29 != 0)
                    break
                
                esi_7 u>>= 1
                
                if (esi_7 == 0)
                    goto label_5a897e
            
            if (esi_7 u<= 0x155)
                goto label_5a8981
    int32_t var_8_1 = 0
    result = sub_5ad150(eax_29, esi_5, &edx[0x5bff2], ebx_5, eax_29, esi_7, edx)
    
    if (esi_7 u> 0x155)
        result = sub_7599be(eax_29)
else
    result = sub_5acff0(eax_21, esi_5, &edx[0x5bff2], edx)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
