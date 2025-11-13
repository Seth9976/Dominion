// 函数: sub_65d0f0
// 地址: 0x65d0f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = arg3
int32_t* var_44 = esi
char const* const var_6c_2
int32_t var_68_1
char const* const var_64_1
char* ecx

if (*(esi + 5) == 0)
    int32_t eax_1 = data_147abe0 + 1
    esi[0x5c6] = arg2
    *esi = eax_1
    data_147abe0 = eax_1
    arg1 = arg5[9].d
    esi[0x5ac] = arg1
    void* ecx_1 = *(arg2 + 0x16e8)
    esi[0x5ba] = ecx_1
    
    if (ecx_1 != 0)
        arg1 = esi[3]
        
        if (arg1 != *(ecx_1 + 0xc))
            int32_t eax_3 = esi[0x57a]
            esi[0x5bd] = 0
            esi[0x57c] = eax_3
            arg1 = *(ecx_1 + 0xc)
            esi[3] = arg1
    
    int32_t edi_1 = 0
    char var_2c
    
    if (esi[0x5c3] s> 0)
        int32_t ecx_2 = 0
        int32_t var_48_1 = 0
        
        while (true)
            if (edi_1 s< 0 || edi_1 s>= esi[0x5c3])
                var_64_1 = "XArray<struct UI2StateEffect>::operator []"
                var_68_1 = 0xb5
                var_6c_2 = "C:\x\ax2017\Engine\xArray.h"
                ecx = "index >= 0 && index < mSize"
                goto label_65d6c5
            
            arg1 = esi[0x5c2] + ecx_2
            var_2c.d = arg1
            int32_t ecx_3 = *arg1
            
            if (ecx_3 == 0)
                sub_666610(esi, arg1[3])
            else
                if (ecx_3 != 1)
                    var_64_1 = "UIStateEffectsUpdate"
                    var_68_1 = 0x5ce9
                    ecx = "Halt"
                    goto label_65d6bb
                
                sub_665db0(arg1, arg1[5], esi, 0x3f800000, 0xfffffc18, ecx_3.b - 1)
            
            arg1 = var_2c.d
            float xmm0_2 = arg1[4] f- arg4
            arg1[4] = xmm0_2
            int32_t ecx_11
            
            if (0f < xmm0_2)
                ecx_11 = var_48_1
            else
                int32_t edx_2 = esi[0x5c3]
                
                if (edi_1 s>= edx_2)
                    var_64_1 = "XArray<struct UI2StateEffect>::RemoveAt"
                    var_68_1 = 0xdc
                    var_6c_2 = "C:\x\ax2017\Engine\xArray.h"
                    ecx = "index >= 0 && index < mSize"
                    goto label_65d6c5
                
                if (edx_2 - edi_1 - 1 s> 0)
                    int32_t ecx_9 = var_48_1 + esi[0x5c2]
                    arg1 = memmove(ecx_9, ecx_9 + 0x18, (edx_2 - edi_1 - 1) * 0x18)
                
                edi_1 -= 1
                esi[0x5c3] -= 1
                ecx_11 = var_48_1 - 0x18
            
            edi_1 += 1
            ecx_2 = ecx_11 + 0x18
            var_48_1 = ecx_2
            
            if (edi_1 s>= esi[0x5c3])
                break
            
            continue
    
    int32_t* eax_8 = sub_64cc90(esi)
    int32_t ecx_13 = 0
    int32_t edx_5 = *eax_8
    
    if (edx_5 s<= 0)
        goto label_65d30b
    
    int32_t* edi_2 = eax_8[2]
    
    while (*edi_2 != 0x70)
        ecx_13 += 1
        edi_2 = &edi_2[4]
        
        if (ecx_13 s>= edx_5)
            goto label_65d30b
    
    if (edi_2 == 0)
        goto label_65d30b
    
    arg1 = sub_6dd320(&data_8cae70, 0x70)
    
    if (arg1[4] == 8)
        uint8_t* edx_6 = edi_2[2]
        
        if (edx_6 != 0)
            sub_666610(esi, edx_6)
        label_65d30b:
            int32_t* eax_9 = esi[0x5bd]
            int128_t var_20 = zx.o(0)
            int32_t edi_3
            int128_t xmm0_3
            
            if (eax_9 != 0)
                int32_t* ecx_17
                int32_t* edx_11
                
                if (*(arg5 + 0xb8) != 0)
                    bool cond:0_1 = esi[0x5c1] != 0
                    esi[0x5c0] = 0
                    
                    if (not(cond:0_1))
                        esi[0x5bf] = sub_64c020(0x1c00)
                        esi[0x5c0] = 0
                        esi[0x5c1] = 0x100
                    
                    sub_657930(sub_657930(arg5, *(arg5 + 0xb4), &esi[0x5bf], *(arg5 + 0xb8)), 
                        esi[0x5bc], &esi[0x5bf], esi[0x5bd])
                    int32_t* ecx_20 = esi[0x5bf]
                    int32_t* edi_6 = esi[0x5c0]
                    var_20.d = ecx_20
                    var_20:4.d = edi_6
                    var_20:0xc.d = 0
                    int32_t eax_21 = edi_6 * 0x1c s/ 0x1c
                    sub_680320(eax_21, &ecx_20[edi_6 * 7], ecx_20, eax_21, 0.d)
                    ecx_17 = ecx_20
                    edx_11 = edi_6
                else
                    int32_t* edi_4 = esi[0x5bc]
                    var_20:4.d = eax_9
                    var_20.d = edi_4
                    int32_t eax_14 = eax_9 * 0x1c s/ 0x1c
                    sub_680320(eax_14, &edi_4[eax_9 * 7], edi_4, eax_14, 0.d)
                    edx_11 = eax_9
                    ecx_17 = edi_4
                
                esi = var_44
                edi_3 = sub_65bdd0(ecx_17, edx_11)
                xmm0_3 = var_20
            else
                xmm0_3 = *(arg5 + 0xb4)
                edi_3 = *(arg5 + 0xc4)
            
            esi[0x5b9] = edi_3
            char var_4e = 0
            *(esi + 0x16d4) = xmm0_3
            char eax_24 = sub_653a70(&esi[0x5b5], edi_3, esi, &esi[0x5b5], &var_4e)
            
            if (eax_24 != 0)
                int32_t eax_25 = esi[0x5b6]
                int32_t edx_19 = 0
                int32_t* ecx_22 = esi[0x5b5]
                
                if (eax_25 s<= 0)
                label_65d4c2:
                    ecx_22 = nullptr
                else
                    while (true)
                        if (*ecx_22 == &data_c21418)
                            eax_25 = ecx_22[1]
                            
                            if (eax_25 == 0)
                                break
                            
                            if (eax_25 == 0xffffffff)
                                break
                            
                            eax_25 = esi[0x5b6]
                        
                        edx_19 += 1
                        ecx_22 = &ecx_22[7]
                        
                        if (edx_19 s>= eax_25)
                            goto label_65d4c2
                
                eax_25.b = ecx_22 != 0
                esi[4].b = eax_25.b
            
            int128_t* ecx_23 = arg5
            int32_t i_3 = 0x90
            int32_t i
            
            do
                char eax_26 = *ecx_23
                ecx_23 += 1
                edi_3 = edi_3 u>> 8 ^ *(((zx.d(eax_26) ^ zx.d(edi_3.b)) << 2) + &data_7ffd70)
                i = i_3
                i_3 -= 1
            while (i != 1)
            void* ecx_24 = &esi[0x4e3]
            int32_t i_4 = 8
            int32_t i_1
            
            do
                char eax_29 = *ecx_24
                ecx_24 += 1
                edi_3 = edi_3 u>> 8 ^ *(((zx.d(eax_29) ^ zx.d(edi_3.b)) << 2) + &data_7ffd70)
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
            uint32_t eax_32 = zx.d(eax_24)
            
            if (edi_3 != esi[0x4da])
                eax_32 = 1
            
            eax_32.b |= var_4e
            int32_t* var_40
            var_40.b = eax_32.b
            var_2c.d = eax_32
            uint32_t eax_33 = zx.d(esi[4].b)
            void* result = sub_65b750(eax_33, arg5, esi, eax_33.b, var_40.b)
            esi[0x4da] = edi_3
            
            if (esi[0x57e] == 0xa)
                sub_65c8b0(esi, arg4)
                sub_65bf00(esi)
                result = 1
                var_2c.d = 1
                var_40.b = 1
            
            if (esi[0x57e] == 8)
                result = sub_65cd00(esi, arg4)
            
            if (esi[0x57e] == 9)
                result = sub_65c230(esi, arg4)
            
            if (esi[0x57e] == 7)
                int32_t* eax_34 = esi[0x518]
                result = esi[0x51a]
                
                if (result != 0)
                    void* edi_9 = sub_6db510(esi[0x4ef])
                    void* var_48_2 = edi_9
                    
                    if (edi_9 == 0)
                        char** eax_36 = sub_6da310(eax_34)
                        edi_9 = eax_36
                        var_48_2 = edi_9
                        sub_6def90(eax_36, result, edi_9, 0)
                    
                    int32_t* ecx_33 = *(edi_9 + 0x2c)
                    
                    if (ecx_33 != 0)
                        sub_6dee00(ecx_33)
                    
                    int32_t* i_2 = *(edi_9 + 0x38)
                    
                    if (i_2 != 0)
                        do
                            int32_t* i_5 = i_2
                            i_2 = i_2[4]
                            sub_6da1f0(var_48_2, i_5)
                        while (i_2 != 0)
                        
                        esi = var_44
                    
                    sub_65bf00(esi)
                    result = *(var_48_2 + 0x68)
                    esi[0x4ef] = result
            
            void* ecx_37 = esi[0x4eb]
            
            if (ecx_37 != 0)
                result = sub_6bca30(ecx_37, arg4)
            
            if (esi[0x4db] != 0 || var_2c != 0)
                sub_65aab0(result, &esi[0x5b5], esi, arg4, var_40.b)
                result = esi[0x4db]
                
                if (result s> 0)
                    result -= 1
                    esi[0x4db] = result
                
                if (var_4e != 0)
                    return sub_65bf00(esi)
            
            return result
        
        var_64_1 = "UI2Update"
        var_68_1 = 0x2706
        ecx = "stateName != NULL"
    else
        var_64_1 = "AttribAsString"
        var_68_1 = 0xc6b
        ecx = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_STRING"
else
    var_64_1 = "UI2Update"
    var_68_1 = 0x26e4
    ecx = "!ui.isTemplate"

label_65d6bb:
var_6c_2 = "C:\x\ax2017\Engine\UI2.cpp"
label_65d6c5:
sub_63b870(arg1, &data_801800, ecx, var_6c_2, var_68_1, var_64_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
