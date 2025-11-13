// 函数: sub_4c2ac0
// 地址: 0x4c2ac0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(arg2 * 6)
void* edx_2 = nullptr
int32_t eax_4 = (eax_2 + (edx & 0x7f)) s>> 7

if (eax_4 - 1 s>= 0)
    edx_2 = eax_4 - 1

void* i = eax_4 + 1
char const* const var_34
int32_t var_30
char const* const var_2c_12
char* ecx_1
void* result
void* var_10

if (arg1 u> 3)
    var_2c_12 = "FriendsQueryServerForMore"
    var_30 = 0x1471
    var_34 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
    ecx_1 = "Halt"
else
    switch (arg1)
        case 0
            i = data_cc8d5c
            
            if (i != 0)
                void* esi_1 = i
                int32_t ecx_2 = 0
                result = esi_1
                int32_t edi_1 = *(esi_1 + 0x5028)
                
                if (edi_1 s> 0)
                    int32_t* ebx_1 = esi_1 + 0x28
                    void* edx_3 = esi_1 + 0x38
                    
                    do
                        int32_t eax_5 = *edx_3
                        
                        if (eax_5 != 4 && eax_5 == 5)
                            int32_t eax_8 = *ebx_1
                            
                            if (eax_8 != 0xffffffff && (eax_8 s< 0 || eax_8 s> 0x7f))
                                *(esi_1 + 0x5028) = edi_1 - 1
                                int32_t* edi_2 = ebx_1
                                void* esi_2 = esi_1 + ((edi_1 - 1) << 5)
                                var_10 = edx_3 - 0x20
                                ebx_1 -= 0x20
                                *edi_2 = *(esi_2 + 0x28)
                                edi_2[1] = *(esi_2 + 0x2c)
                                sub_63d850(&edi_2[2], esi_2 + 0x30)
                                edx_3 = var_10
                                edi_2[3] = *(esi_2 + 0x34)
                                edi_2[4] = *(esi_2 + 0x38)
                                int32_t eax_16 = *(esi_2 + 0x40)
                                esi_1 = result
                                edi_2[7] = *(esi_2 + 0x44)
                                ecx_2 -= 1
                                edi_2[6] = eax_16
                        
                        edi_1 = *(esi_1 + 0x5028)
                        ecx_2 += 1
                        edx_3 += 0x20
                        ebx_1 = &ebx_1[8]
                    while (ecx_2 s< edi_1)
                    
                    i = data_cc8d5c
                
                *(esi_1 + 0x502c) = 0
                int32_t edi_3 = 0
                
                while (i != 0)
                    if (edi_3 s< *(i + 0x5038) || edi_3 s> *(i + 0x503c))
                        bool cond:1_1 = *(i + 0x18) != 3
                        var_10 = 3
                        int32_t var_c_1 = edi_3
                        
                        if (not(cond:1_1))
                            int32_t ecx_6 = *(i + 0x14)
                            void* edx_5 = data_147abf4
                            
                            if (ecx_6 != 0)
                                uint32_t esi_3 = zx.d(ecx_6.w)
                                
                                if (esi_3 u< *(edx_5 + 4))
                                    void* esi_5 = esi_3 * 0x64 + *edx_5
                                    
                                    if (*(esi_5 + 0x60) == ecx_6 && esi_5 != 0)
                                        int32_t var_2c_2 = 0xf42cc
                                        sub_689e00(i, 8, esi_5 + 0x50)
                                        sub_689be0(&var_10, 8, esi_5 + 0x50, &var_10)
                                        i = data_cc8d5c
                    
                    edi_3 += 1
                    
                    if (edi_3 s> 0)
                        goto label_4c2c59
            
        label_4c2b00:
            var_2c_12 = "GetClient"
            var_30 = 0x7b
            var_34 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
            ecx_1 = "gClient"
        case 1
            sub_4c2820(i, nullptr, 2, nullptr)
            i = data_cc8d5c
            
            if (i != 0)
                void* esi_6 = i
                void* ecx_9 = nullptr
                result = esi_6
                int32_t edi_4 = *(esi_6 + 0x5028)
                
                if (edi_4 s> 0)
                    int32_t* ebx_2 = esi_6 + 0x28
                    void* edx_6 = esi_6 + 0x38
                    
                    do
                        int32_t eax_19 = *edx_6
                        
                        if (eax_19 != 4 && eax_19 == 5)
                            int32_t eax_22 = *ebx_2
                            
                            if (eax_22 != 0xffffffff && (eax_22 s< 0 || eax_22 s> 0x7f))
                                *(esi_6 + 0x5028) = edi_4 - 1
                                int32_t* edi_5 = ebx_2
                                void* esi_7 = esi_6 + ((edi_4 - 1) << 5)
                                var_10 = ecx_9 - 1
                                ebx_2 -= 0x20
                                *edi_5 = *(esi_7 + 0x28)
                                edi_5[1] = *(esi_7 + 0x2c)
                                sub_63d850(&edi_5[2], esi_7 + 0x30)
                                edx_6 -= 0x20
                                edi_5[3] = *(esi_7 + 0x34)
                                edi_5[4] = *(esi_7 + 0x38)
                                int32_t eax_30 = *(esi_7 + 0x40)
                                esi_6 = result
                                edi_5[7] = *(esi_7 + 0x44)
                                ecx_9 = var_10
                                edi_5[6] = eax_30
                        
                        edi_4 = *(esi_6 + 0x5028)
                        ecx_9 += 1
                        edx_6 += 0x20
                        ebx_2 = &ebx_2[8]
                    while (ecx_9 s< edi_4)
                    
                    i = data_cc8d5c
                
                *(esi_6 + 0x502c) = 0
                int32_t edi_6 = 0
                
                while (i != 0)
                    if (edi_6 s< *(i + 0x5038) || edi_6 s> *(i + 0x503c))
                        bool cond:2_1 = *(i + 0x18) != 3
                        var_10 = 3
                        int32_t var_c_2 = edi_6
                        
                        if (not(cond:2_1))
                            int32_t ecx_13 = *(i + 0x14)
                            void* edx_8 = data_147abf4
                            
                            if (ecx_13 != 0)
                                uint32_t esi_8 = zx.d(ecx_13.w)
                                
                                if (esi_8 u< *(edx_8 + 4))
                                    void* esi_10 = esi_8 * 0x64 + *edx_8
                                    
                                    if (*(esi_10 + 0x60) == ecx_13 && esi_10 != 0)
                                        int32_t var_2c_5 = 0xf42cc
                                        sub_689e00(i, 8, esi_10 + 0x50)
                                        sub_689be0(&var_10, 8, esi_10 + 0x50, &var_10)
                                        i = data_cc8d5c
                    
                    edi_6 += 1
                    
                    if (edi_6 s> 0)
                        goto label_4c2c59
            
            goto label_4c2b00
        case 2
            sub_4c2820(i, edx_2, 2, i)
            i = data_cc8d5c
            
            if (i != 0)
                void* esi_11 = i
                void* ecx_16 = nullptr
                result = esi_11
                int32_t edi_7 = *(esi_11 + 0x5028)
                
                if (edi_7 s> 0)
                    void* ebx_3 = esi_11 + 0x28
                    void* edx_9 = esi_11 + 0x38
                    
                    do
                        int32_t eax_32 = *edx_9
                        
                        if (eax_32 != 4 && eax_32 == 5)
                            int32_t eax_35 = *ebx_3
                            
                            if (eax_35 != 0xffffffff && (eax_35 s< 0 || eax_35 s> 0x7f))
                                *(esi_11 + 0x5028) = edi_7 - 1
                                void* edi_8 = ebx_3
                                void* esi_12 = esi_11 + ((edi_7 - 1) << 5)
                                var_10 = ecx_16 - 1
                                ebx_3 -= 0x20
                                *edi_8 = *(esi_12 + 0x28)
                                *(edi_8 + 4) = *(esi_12 + 0x2c)
                                sub_63d850(edi_8 + 8, esi_12 + 0x30)
                                edx_9 -= 0x20
                                *(edi_8 + 0xc) = *(esi_12 + 0x34)
                                *(edi_8 + 0x10) = *(esi_12 + 0x38)
                                int32_t eax_43 = *(esi_12 + 0x40)
                                esi_11 = result
                                *(edi_8 + 0x1c) = *(esi_12 + 0x44)
                                ecx_16 = var_10
                                *(edi_8 + 0x18) = eax_43
                        
                        edi_7 = *(esi_11 + 0x5028)
                        ecx_16 += 1
                        edx_9 += 0x20
                        ebx_3 += 0x20
                    while (ecx_16 s< edi_7)
                    
                    i = data_cc8d5c
                
                *(esi_11 + 0x502c) = 0
                int32_t edi_9 = 0
                
                while (i != 0)
                    if (edi_9 s< *(i + 0x5038) || edi_9 s> *(i + 0x503c))
                        bool cond:3_1 = *(i + 0x18) != 3
                        var_10 = 3
                        int32_t var_c_3 = edi_9
                        
                        if (not(cond:3_1))
                            int32_t ecx_20 = *(i + 0x14)
                            void* edx_11 = data_147abf4
                            
                            if (ecx_20 != 0)
                                uint32_t esi_13 = zx.d(ecx_20.w)
                                
                                if (esi_13 u< *(edx_11 + 4))
                                    void* esi_15 = esi_13 * 0x64 + *edx_11
                                    
                                    if (*(esi_15 + 0x60) == ecx_20 && esi_15 != 0)
                                        int32_t var_2c_9 = 0xf42cc
                                        sub_689e00(i, 8, esi_15 + 0x50)
                                        sub_689be0(&var_10, 8, esi_15 + 0x50, &var_10)
                                        i = data_cc8d5c
                    
                    edi_9 += 1
                    
                    if (edi_9 s> 0)
                    label_4c2c59:
                        *(result + 0x5038) = 0
                        *(result + 0x503c) = 0
                        return result
            
            goto label_4c2b00
        case 3
            return sub_4c2820(i, edx_2, 3, i)
sub_63b870(i, &data_801800, ecx_1, var_34, var_30, var_2c_12)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
