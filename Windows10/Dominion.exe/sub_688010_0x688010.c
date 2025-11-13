// 函数: sub_688010
// 地址: 0x688010
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = arg1
int32_t var_8 = esi
char const* const var_28
int32_t var_24
char const* const var_20_1
int32_t eax
char* ecx

if (esi s> 0)
    sub_68b450()
    sub_69e520()
    int32_t* ecx_1 = data_cf65b8
    int32_t ebx_1 = 0
    int32_t var_c_1
    
    if (*(ecx_1 + 0x26) == 0)
        var_c_1 = esi
        esi = 1
        var_8 = 1
    else
        var_c_1 = 1
        data_8c4634 = _mm_cvtepi32_ps(zx.o(esi)) f* data_8c422c
    
    while (true)
        void* eax_1 = data_147abe8
        *(eax_1 + 0x28) = *(eax_1 + 0x28) f+ data_8c4634
        (*(*ecx_1 + 0x1c))()
        void* eax_3 = data_147abe8
        
        if (*(eax_3 + 0x21) == 0)
            int32_t* ecx_2 = data_cf65b8
            *(eax_3 + 0x2c) = *(eax_3 + 0x2c) f+ data_8c4634
            eax = (*(*ecx_2 + 0x20))(esi)
            void* edi_1 = data_147abe8
            
            if (edi_1 == 0)
            label_688229:
                var_20_1 = "GetGameData"
                var_24 = 0x45
                ecx = "gpGameData"
                var_28 = "C:\x\ax2017\Engine\Game.h"
                break
            
            int32_t* edi_2 = *(edi_1 + 0xc)
            void* esi_1 = nullptr
            
            while (true)
                if (esi_1 != 0)
                    esi_1 += 0x94
                else
                    esi_1 = *edi_2
                
                eax = edi_2[1] * 0x94 + *edi_2
                
                if (esi_1 u>= eax)
                    break
                
                while (true)
                    if ((*(esi_1 + 0x90) & 0xffff0000) != 0)
                        if (*(esi_1 + 0x7c) == 0)
                            break
                        
                        sub_6e5c50(esi_1)
                        break
                    
                    esi_1 += 0x94
                    
                    if (esi_1 u>= eax)
                        goto label_688116
            
        label_688116:
            void* edi_3 = data_147abe8
            
            if (edi_3 == 0)
                goto label_688229
            
            int32_t* edi_4 = *(edi_3 + 0x10)
            void* esi_2 = nullptr
            
            while (true)
                if (esi_2 != 0)
                    esi_2 += 0x7c
                else
                    esi_2 = *edi_4
                
                int32_t eax_7 = edi_4[1] * 0x7c + *edi_4
                
                if (esi_2 u>= eax_7)
                    break
                
                while (true)
                    if ((*(esi_2 + 0x78) & 0xffff0000) != 0)
                        if (*(esi_2 + 0x76) == 0)
                            break
                        
                        sub_6b8440(esi_2)
                        break
                    
                    esi_2 += 0x7c
                    
                    if (esi_2 u>= eax_7)
                        goto label_688164
            
        label_688164:
            int32_t* ecx_4 = data_147d2d8
            
            if (ecx_4 != 0)
                (*(*ecx_4 + 8))()
            
            int32_t* ecx_5 = data_147abf4
            
            if (ecx_5 != 0)
                void* esi_3 = nullptr
                
                while (true)
                    if (esi_3 != 0)
                        esi_3 += 0x64
                    else
                        esi_3 = *ecx_5
                    
                    int32_t eax_10 = ecx_5[1] * 0x64 + *ecx_5
                    
                    if (esi_3 u>= eax_10)
                        break
                    
                    while (true)
                        if ((*(esi_3 + 0x60) & 0xffff0000) != 0)
                            if (*(esi_3 + 0x38) != 4)
                                break
                            
                            sub_68b0d0(esi_3)
                            ecx_5 = data_147abf4
                            break
                        
                        esi_3 += 0x64
                        
                        if (esi_3 u>= eax_10)
                            goto label_6881b4
            
        label_6881b4:
            esi = var_8
        
        sub_69ea70(data_147ac28 + 0x10)
        ebx_1 += 1
        
        if (ebx_1 s>= var_c_1)
            if (*(data_cf65b8 + 0x26) != 0)
                data_8c4634 = data_8c422c
            
            int32_t* result = sub_69ea70(data_147ac28 + 0x10)
            
            if (data_147abec == 0)
                return result
            
            return sub_688c00()
        
        ecx_1 = data_cf65b8
else
    var_20_1 = "GameUpdateSimulation"
    var_24 = 0x73
    var_28 = "C:\x\ax2017\Engine\Game.cpp"
    ecx = "updateTicks > 0"

sub_63b870(eax, &data_801800, ecx, var_28, var_24, var_20_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
