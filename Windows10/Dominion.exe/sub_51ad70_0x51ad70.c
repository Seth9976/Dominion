// 函数: sub_51ad70
// 地址: 0x51ad70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int64_t* ecx
void* edx
ecx, edx = __chkstk(0x69e4)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
memset(&data_cc8de0, 0, 0x5bd0)
int64_t var_502c
memset(&var_502c, 0, 0x5020)
int32_t eax_2 = ecx[1].d
int32_t var_5024 = eax_2
int32_t eax_3
int32_t edx_1
edx_1:eax_3 = sx.q(eax_2)
int32_t var_14_2 = 0x5851f42d
int32_t var_18_2 = 0x4c957f2d
var_502c = *ecx
int32_t eax_4
int32_t edx_2
eax_4, edx_2 = __allmul(eax_3, edx_1, var_18_2, var_14_2)
data_cc8de8 = 0x7d1
data_cc8de0 = eax_4 + 0x7d1
data_cca780 = &var_502c
data_cc8de4 = adc.d(edx_2, 0, eax_4 u>= 0xfffff82f)
data_cc8dec = 0
int32_t eax_6 = *ecx
int32_t var_18_3
char const* const var_14_3
int32_t eax_8
char* ecx_4
int32_t var_503c
int32_t eax_11

if (eax_6 == 0)
    eax_11 = 0x140
label_51ae69:
    int32_t var_20_1 = eax_11
    eax_8 = sub_516f30(eax_11)
    int32_t esi_1 = eax_8
    int32_t ecx_3 = 0
    int32_t edx_6 = esi_1
    
    while (true)
        if (*(edx_6 + 0xc) == 3)
            int32_t var_5030_1 = edx_6 + 0x10
            eax_8 = ecx_3 * 0x26c
            
            if (*(eax_8 + esi_1 + 0x270) != 0xa)
                var_14_3 = "CampaignGenerate"
                var_18_3 = 0x28f3
                ecx_4 = "numMissions == 10"
                break
            
            void var_69e4
            memset(&var_69e4, 0, 0x1990)
            memcpy(0xcc8df0, &var_69e4, 0x1990)
            
            if (*ecx == 1)
                memcpy(0xcc99f4, edx, *(edx + 0xaf0) << 2)
            
            int32_t edi_1 = 0xffffffff
            int32_t var_5038_1 = 0xffffffff
            
            if (*ecx != 1)
                data_cc97b8 = 2
                data_cc97bc = 0xffffffff
                data_cc97c0 = 0
                data_cc97c4 = 0xa
                data_cc97c8 = *(ecx + 4)
                data_cc97cc = 0xffffffff
                data_cc97d0 = 0
                data_cc97d4 = 0xa
            else
                int32_t ecx_5 = 0
                var_5038_1 = 0
                
                if (arg3 s> 0)
                    int32_t* edx_7 = &data_cc97bc
                    
                    do
                        int32_t eax_16 = *(arg2 + (ecx_5 << 2))
                        edx_7 = &edx_7[4]
                        edx_7[-5] = eax_16
                        int32_t ecx_6 = arg4
                        
                        if (eax_16 != 0x13)
                            ecx_6 = 0xffffffff
                        
                        edx_7[-4] = ecx_6
                        ecx_5 = var_5038_1 + 1
                        edx_7[-3] = 0
                        edx_7[-2] = 0xa
                        var_5038_1 = ecx_5
                    while (ecx_5 s< arg3)
                
                edi_1 = var_5038_1
                (&data_cc97b8)[ecx_5 * 4] = 2
                (&data_cc97bc)[ecx_5 * 4] = 0xffffffff
                (&data_cc97c0)[ecx_5 * 4] = 0
                (&data_cc97c4)[ecx_5 * 4] = 0xa
            
            int32_t eax_23 = 0
            int32_t ecx_8 = 0
            int32_t var_5040_1 = 0
            var_503c = 0
            
            while (true)
                uint32_t count = 0x3e90
                void* ebx_2 = data_cca780 + 0xc
                data_ccb414 = 0
                void* ebx_3 = ebx_2 + ecx_8
                data_ccc098 = 0
                int32_t c = 0
                void* var_1c_6 = &data_cca794
                data_cccd1c = 0
                data_cce620 = 0
                data_cca784 = eax_23
                data_cce9b4.q = 0
                data_cce9cc.q = 0
                data_cce9d4 = 0
                data_cce9c4 = ebx_3
                data_cce9c8 = 0xcc8df0
                data_cce9bc = &data_cc8de0
                data_cce9b0 = 0x17
                data_cce9c0 = 0
                sub_590090(memset(var_1c_6, c, count), 0xcc8df0, &data_cca794, ebx_3, 0x17, 3)
                int32_t edx_8 = data_cca780
                data_cce9c0 = &data_cca794
                
                for (int32_t i = 0; i s< 0x10; i += 8)
                    if (*(i + edx_8 + 0x5010) == 0x3e8)
                        sub_58ffd0(&data_cca794, *(i + edx_8 + 0x5014))
                        edx_8 = data_cca780
                
                if (edi_1 != 0xffffffff)
                    (&data_cc97b8)[edi_1 * 4] = 0
                
                int32_t eax_28 = sub_516f30(*(var_5030_1 + (var_5040_1 << 2)))
                int32_t edx_10 = 0
                int32_t ecx_11 = eax_28
                int32_t var_5048
                int32_t ebx_4
                int32_t edi_3
                
                while (true)
                    if (*(ecx_11 + 0xc) == 3)
                        edi_3 = ecx_11 + 0x10
                        var_5048 = edi_3
                        ebx_4 = *(edx_10 * 0x26c + eax_28 + 0x270)
                        break
                    
                    edx_10 += 1
                    ecx_11 += 0x26c
                    
                    if (edx_10 s>= 4)
                        edi_3 = var_5048
                        ebx_4 = 0
                        break
                
                if (*ecx == 0)
                    int32_t eax_32 = sub_50b550(*(ecx + 4))[0x24]
                    
                    if (eax_32 != 0)
                        eax_32()
                
                int32_t esi_5 = 0
                
                if (ebx_4 s> 0)
                    do
                        eax_8 = sub_516f30(*(edi_3 + (esi_5 << 2)))
                        int32_t ecx_14 = 0
                        int32_t* edx_11 = eax_8 + 0xc
                        
                        while (true)
                            if (ecx_14 s>= 4)
                                var_14_3 = "CampaignPieceDefGetFn"
                                var_18_3 = 0x30a
                                goto label_51b447
                            
                            if (*edx_11 == 1)
                                break
                            
                            ecx_14 += 1
                            edx_11 = &edx_11[0x9b]
                        
                        (*(ecx_14 * 0x26c + eax_8 + 0x10))()
                        edi_3 = var_5048
                        esi_5 += 1
                    while (esi_5 s< ebx_4)
                
                sub_51ac20(0)
                sub_51ac20(1)
                sub_51ac20(0)
                sub_51ac20(2)
                sub_51ac20(3)
                sub_58f630(0xcc8df0)
                int32_t eax_35 = 2
                int32_t i_1 = 0
                int32_t var_5034_1 = 2
                void* edi_6 = ebx_3 + 0x28
                
                do
                    int32_t esi_6 = *edi_6
                    
                    if (esi_6 == 0)
                        break
                    
                    if ((*(sub_571b30(esi_6, data_cce9b0) + 0x9c) & 0x40) != 0)
                        eax_35 = var_5034_1
                    else
                        eax_35 = var_5034_1
                        
                        if ((*(sub_571b30(esi_6, data_cce9b0) + 0x9c) & 0x800) == 0)
                            eax_35 -= 1
                            var_5034_1 = eax_35
                    
                    i_1 += 1
                    edi_6 += 0x3c
                while (i_1 s< 4)
                
                int32_t ebx_5 = 0
                
                if (eax_35 s> 0)
                    do
                        int32_t esi_7 = data_cc8de4
                        int32_t edi_7 = data_cc8de0
                        int32_t eax_40
                        int32_t edx_16
                        eax_40, edx_16 = __allmul(edi_7, esi_7, 0x4c957f2d, 0x5851f42d)
                        bool c_2 = eax_40 + data_cc8de8 u< eax_40
                        data_cc8de0 = eax_40 + data_cc8de8
                        int32_t edi_9 = (edi_7 u>> 0x1b | esi_7 << 5) ^ esi_7 u>> 0xd
                        uint32_t esi_8 = esi_7 u>> 0x1b
                        data_cc8de4 = adc.d(edx_16, data_cc8dec, c_2)
                        int32_t var_5050_1 = 0
                        
                        if ((((edi_9 << ((neg.d(esi_8)).b & 0x1f)).b | (edi_9 u>> esi_8.b).b) & 1)
                                == 0)
                            int32_t* var_38 = &std::_Func_impl_no_alloc<class <lambda_41006f407378fa9eb3ad32886a3fba35>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
                            int32_t** var_14_10 = &var_38
                            int32_t eax_47
                            int32_t edx_18
                            eax_47, edx_18 = sub_50ad20(&var_38, 0, &data_cca794, var_38)
                            
                            if (eax_47 == 0)
                                break
                            
                            sub_50a6a0(eax_47, edx_18, eax_47, 4, 0)
                        
                        ebx_5 += 1
                    while (ebx_5 s< var_5034_1)
                
                int32_t i_2 = 0
                
                if (data_cce9d4 s> 0)
                    do
                        sub_58e890(*((i_2 << 2) + &data_cce9d0), 0x4000)
                        i_2 += 1
                    while (i_2 s< data_cce9d4)
                
                sub_58fba0(ebx_3)
                sub_590420()
                sub_51ac20(4)
                data_cce9a8 = 0
                sub_58dd90(&data_cca794)
                char eax_48 = sub_51aca0(ebx_3, 6) | *(ebx_3 + 0x31c)
                char ebx_7 = *(ebx_3 + 0x31d)
                *(ebx_3 + 0x31c) = eax_48
                char eax_49 = sub_51aca0(ebx_3, 9)
                int32_t ecx_30 = var_503c
                *(ebx_3 + 0x31d) = eax_49 | ebx_7
                ecx_8 = ecx_30 + 0x800
                eax_23 = var_5040_1 + 1
                var_503c = ecx_8
                var_5040_1 = eax_23
                
                if (ecx_8 s>= 0x5000)
                    break
                
                edi_1 = var_5038_1
            
            memcpy(arg1, &var_502c, 0x5020)
            CookieCheckFunction(arg1)
            return arg1
        
        ecx_3 += 1
        edx_6 += 0x26c
        
        if (ecx_3 s>= 4)
            var_14_3 = "CampaignGenerate"
            var_18_3 = 0x28f3
            ecx_4 = "numMissions == 10"
            break
else
    eax_8 = eax_6 - 1
    
    if (eax_6 == 1)
        int32_t eax_10 = sub_50af00(sub_516f30(0x12d), &var_503c)
        eax_11 = sub_50af60(eax_10, var_503c, &data_cc8de0, eax_10)
        goto label_51ae69
    
    var_14_3 = "RollBlueprint"
    var_18_3 = 0x2772
label_51b447:
    ecx_4 = "Halt"
sub_63b870(eax_8, &data_801800, ecx_4, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_18_3, var_14_3)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
