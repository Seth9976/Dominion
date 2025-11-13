// 函数: sub_5deb60
// 地址: 0x5deb60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char const* const var_18
int32_t var_14
char const* const var_10
char* ecx

if (*(arg1 + 0x2c) == 3)
    void* ecx_1 = data_cc8d5c
    
    if (ecx_1 != 0)
        void* result
        
        if (data_b80b48 == *(ecx_1 + 0x7590) && sub_610fb0(arg1).b != 0)
            result = data_b80afc
            
            if (result != 7)
                goto label_5dec60
            
            if ((*(sub_571b30(*(arg1 + 0x30), sub_5cf7e0()) + 0x9c) & 0x100000) == 0)
                result = *(arg1 + 0x30)
                
                if (result != 0 && result != 0x91c && result != 0xc0a && result != 0x1128
                        && result != 0x1019 && result != 0x101e && result != 0x1023
                        && result != 0x1028 && result != 0x102d && result != 0x1032
                        && result != 0x70d && result != 0x718 && result != 0xd30
                        && result != 0xd3d)
                    if (arg2 != 0)
                        *arg2 = 0x14
                    
                    result.b = 1
                    return result
                
                result = data_b80afc
            label_5dec60:
                
                if (result != 8)
                    int32_t ecx_7 = *(arg1 + 0x70)
                    
                    if (ecx_7 != 0)
                        void* eax_6 = sub_5cba00(ecx_7)
                        uint32_t esi_2 = eax_6
                        
                        if (sub_5efe00(eax_6, arg2, esi_2, 0).b != 0)
                            return sub_610fb0(esi_2) != 0
                else
                    if (arg2 != 0)
                        *arg2 = 1
                        int32_t eax_4 = data_b80b08 - 0xed
                        
                        if (eax_4 u<= 6)
                            lookup_table_5ded18[eax_4]
                            *arg2 = 0x16
                    
                    int32_t ecx_6 = data_b80b64
                    result = nullptr
                    
                    if (ecx_6 s> 0)
                        while ((&data_b80b68)[result] != *(arg1 + 0x30))
                            result += 1
                            
                            if (result s>= ecx_6)
                                goto label_5decaf
                        
                        result.b = 1
                        return result
        
    label_5decaf:
        result.b = 0
        return result
    
    var_10 = "GetClient"
    var_14 = 0x7b
    var_18 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx = "gClient"
else
    var_10 = "IsPileInActiveSet"
    var_14 = 0x3df8
    var_18 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx = "gfxPile.type == DOMGFX_PILE"

int32_t eax
sub_63b870(eax, &data_801800, ecx, var_18, var_14, var_10)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
