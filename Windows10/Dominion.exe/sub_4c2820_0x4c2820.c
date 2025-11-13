// 函数: sub_4c2820
// 地址: 0x4c2820
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = data_cc8d5c
void* var_1c = arg2
int32_t var_24 = arg3
char const* const var_3c
int32_t var_38
char const* const var_34_1
char* ecx

if (esi != 0)
    arg1 = arg4
    void* ebx_1 = arg2
    void* edi_1 = esi
    void* var_c_1 = edi_1
    
    if (arg1 != 0)
        ebx_1 = arg1
    
    void* var_10_1 = ebx_1
    
    if (arg3 == 2 || arg3 == 3)
        if (*(edi_1 + 0x5028) s> 0)
            arg1 = edi_1 + 0x38
            int32_t i = 0
            void* ebx_2 = edi_1 + 0x28
            void* var_14_1 = arg1
            
            do
                int32_t eax = *arg1
                bool cond:1_1
                
                if (eax == 4)
                    cond:1_1 = arg3 != 2
                label_4c28af:
                    
                    if (not(cond:1_1))
                        int32_t edx = *ebx_2
                        
                        if (edx != 0xffffffff)
                            int32_t eax_4 = var_1c << 7
                            edi_1 = var_c_1
                            
                            if (edx s< eax_4 || edx s> eax_4 + 0x7f)
                                var_14_1 -= 0x20
                                int32_t eax_6 = *(edi_1 + 0x5028) - 1
                                *(edi_1 + 0x5028) = eax_6
                                void* edi_3 = ebx_2
                                ebx_2 -= 0x20
                                void* esi_3 = var_c_1 + (eax_6 << 5)
                                *edi_3 = *(esi_3 + 0x28)
                                *(edi_3 + 4) = *(esi_3 + 0x2c)
                                sub_63d850(edi_3 + 8, esi_3 + 0x30)
                                *(edi_3 + 0xc) = *(esi_3 + 0x34)
                                *(edi_3 + 0x10) = *(esi_3 + 0x38)
                                int32_t ecx_2 = *(esi_3 + 0x44)
                                i -= 1
                                *(edi_3 + 0x18) = *(esi_3 + 0x40)
                                *(edi_3 + 0x1c) = ecx_2
                                edi_1 = var_c_1
                                arg3 = var_24
                else if (eax == 5)
                    cond:1_1 = arg3 != 3
                    goto label_4c28af
                i += 1
                arg1 = var_14_1 + 0x20
                ebx_2 += 0x20
                var_14_1 = arg1
            while (i s< *(edi_1 + 0x5028))
            
            esi = data_cc8d5c
            arg2 = var_1c
            ebx_1 = var_10_1
        
        *(edi_1 + 0x502c) = 0
        
        if (arg2 s> ebx_1)
        label_4c2a29:
            
            if (arg3 == 2)
                *(edi_1 + 0x5034) = ebx_1
                *(edi_1 + 0x5030) = arg2
                return arg1
            
            if (arg3 == 3)
                *(edi_1 + 0x5038) = arg2
                *(edi_1 + 0x503c) = ebx_1
                return arg1
            
            var_34_1 = "ModifyFriendRange"
            var_38 = 0x144d
            ecx = "Halt"
            var_3c = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
        else
            void* ebx_3 = arg2
            
            if (arg3 u<= 3)
                arg1 = var_10_1
                
                while (true)
                    bool cond:3_1
                    
                    switch (jump_table_4c2aa4[arg3])
                        case 0x4c2973
                            if (esi == 0)
                                goto label_4c2839
                            
                            if (ebx_3 s>= *(esi + 0x5030))
                                cond:3_1 = ebx_3 s<= *(esi + 0x5034)
                            label_4c29a1:
                                
                                if (cond:3_1)
                                    goto label_4c2a1a
                                
                                goto label_4c29a3
                            
                        label_4c29a3:
                            bool cond:2_1 = *(esi + 0x18) != 3
                            int32_t var_18 = arg3
                            void* var_14_2 = ebx_3
                            
                            if (not(cond:2_1))
                                int32_t edx_1 = *(esi + 0x14)
                                
                                if (edx_1 != 0)
                                    uint32_t eax_15 = zx.d(edx_1.w)
                                    edi_1 = var_c_1
                                    
                                    if (eax_15 u< *(data_147abf4 + 4))
                                        void* eax_18 = eax_15 * 0x64 + *data_147abf4
                                        edi_1 = var_c_1
                                        
                                        if (*(eax_18 + 0x60) == edx_1 && eax_18 != 0)
                                            int32_t var_34_3 = 0xf42cc
                                            sub_689e00(eax_18, 8, eax_18 + 0x50)
                                            sub_689be0(&var_18, 8, eax_18 + 0x50, &var_18)
                                            esi = data_cc8d5c
                                            arg3 = var_24
                                    
                                    arg1 = var_10_1
                            
                            goto label_4c2a1a
                        case 0x4c298b
                            if (esi == 0)
                                goto label_4c2839
                            
                            if (ebx_3 s< *(esi + 0x5038))
                                goto label_4c29a3
                            
                            cond:3_1 = ebx_3 s<= *(esi + 0x503c)
                            goto label_4c29a1
                        case 0x4c2a1a
                        label_4c2a1a:
                            ebx_3 += 1
                            
                            if (ebx_3 s<= arg1)
                                continue
                            
                            arg2 = var_1c
                            ebx_1 = var_10_1
                            break
                
                goto label_4c2a29
            
            var_34_1 = "HasFriendsPageAlready"
            var_38 = 0x1659
            var_3c = "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp"
            ecx = "Halt"
    else
        var_34_1 = "ModifyFriendRange"
        var_38 = 0x1420
        ecx = "tab == FRIENDSTAB_REJECTS || tab == FRIENDSTAB_BLOCKS"
        var_3c = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
else
label_4c2839:
    var_34_1 = "GetClient"
    var_38 = 0x7b
    var_3c = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx = "gClient"

sub_63b870(arg1, &data_801800, ecx, var_3c, var_38, var_34_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
