// 函数: sub_5904d0
// 地址: 0x5904d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t* edx
ecx, edx = __chkstk(0x3eb4)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_10 = edi
uint32_t count = 0x534
int32_t c = 0
uint32_t var_1c = arg1
memset(var_1c, c, count)
int32_t eax_3
uint32_t edx_1
edx_1:eax_3 = sx.q(arg2)
int32_t var_14 = 0x5851f42d
int32_t var_18 = 0x4c957f2d
var_1c = edx_1
int32_t eax_4
int32_t edx_2
eax_4, edx_2 = __allmul(eax_3, var_1c, var_18, var_14)
data_cce9b0 = ecx
var_1c = eax_4 + 1
data_cce9b4.q = 0
int32_t var_18_1 = adc.d(edx_2, 0, eax_4 u>= 0xffffffff)
int32_t edx_4 = data_cce9b4
int32_t* ecx_1 = &edx[1]
int32_t var_14_1 = 1
int32_t esi_1 = 0
int32_t var_10_1 = 0
data_cce9cc.q = 0
data_cce9d4 = 0
data_cce9c4 = arg1
data_cce9c8 = edx
data_cce9bc = &var_1c
data_cce9c0 = 0
int32_t var_18_4
char const* const var_14_4
int32_t eax_6
char* ecx_15

while (true)
    if (ecx_1[-1] == 1)
        eax_6 = *ecx_1
        *(arg1 + (edx_4 << 2)) = eax_6
        edx_4 = data_cce9b4 + 1
        data_cce9b4 = edx_4
        
        if (*ecx_1 s<= 0)
            var_14_4 = "RollKingdom_MergeSpecificCards"
            var_18_4 = 0x4600
            ecx_15 = "config.specificKingdom.piles[i].what > 0"
            break
    
    esi_1 += 1
    ecx_1 = &ecx_1[4]
    
    if (esi_1 s>= 0xa)
        int32_t esi_2 = 0
        void* edx_6 = &edx[0x29]
        
        while (true)
            if (*(edx_6 - 4) == 1)
                int32_t ecx_2 = data_cce9b8
                data_cce9b8 = ecx_2 + 1
                int32_t ecx_3 = arg1 + ecx_2 * 0x3c
                eax_6 = *edx_6
                *(ecx_3 + 0x28) = eax_6
                *(ecx_3 + 0x2c) = *(edx_6 + 0xc)
                *(ecx_3 + 0x3c) = *(edx_6 + 0x1c)
                *(ecx_3 + 0x4c) = *(edx_6 + 0x2c)
                *(ecx_3 + 0x5c) = *(edx_6 + 0x3c)
                
                if (*edx_6 s<= 0)
                    var_14_4 = "RollKingdom_MergeSpecificCards"
                    var_18_4 = 0x460a
                    ecx_15 = "config.specificKingdom.landscapes[i].landscape.what > 0"
                    break
            
            esi_2 += 1
            edx_6 += 0x48
            
            if (esi_2 s>= 4)
                int32_t edx_7 = 0
                void* ecx_4 = &edx[0x71]
                int32_t* esi_3 = arg1 + 0x118
                
                while (true)
                    if (*(ecx_4 - 4) == 1)
                        eax_6 = *ecx_4
                        *esi_3 = eax_6
                        
                        if (*ecx_4 s<= 0)
                            var_14_4 = "RollKingdom_MergeSpecificCards"
                            var_18_4 = 0x4612
                            ecx_15 = "config.specificKingdom.extraPiles[i].what > 0"
                            break
                    
                    edx_7 += 1
                    esi_3 = &esi_3[1]
                    ecx_4 += 0x10
                    
                    if (edx_7 s>= 0x6b)
                        int32_t var_14_2 = 0
                        var_1c = arg1
                        void var_3eac
                        data_cce9c0 = &var_3eac
                        sub_590090(&var_3eac, edx, &var_3eac, var_1c, ecx, var_14_2)
                        
                        for (int32_t i = 0; i s< 0xa; i += 1)
                            int32_t ecx_6 = *(arg1 + (i << 2))
                            
                            if (ecx_6 == 0)
                                break
                            
                            sub_58e890(ecx_6, 0)
                        
                        int32_t i_1 = 0
                        int32_t* esi_4 = arg1 + 0x28
                        
                        do
                            int32_t ecx_7 = *esi_4
                            
                            if (ecx_7 == 0)
                                break
                            
                            sub_58e890(ecx_7, 0)
                            i_1 += 1
                            esi_4 = &esi_4[0xf]
                        while (i_1 s< 4)
                        
                        sub_58f390(edx)
                        sub_58f630(edx)
                        int32_t i_2 = 0
                        
                        if (data_cce9d4 s> 0)
                            do
                                sub_58e890(*((i_2 << 2) + &data_cce9d0), 0x4000)
                                i_2 += 1
                            while (i_2 s< data_cce9d4)
                        
                        sub_58fba0(arg1)
                        sub_4d4e30(sub_590420(), arg1 + 0x28, arg1, 0xa, sub_58d5a0)
                        CookieCheckFunction(arg1)
                        return arg1
                
                break
        
        break

var_1c = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
sub_63b870(eax_6, &data_801800, ecx_15, var_1c, var_18_4, var_14_4)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
