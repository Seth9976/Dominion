// 函数: sub_4ba1d0
// 地址: 0x4ba1d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
int32_t* eax = arg1
void* ecx = data_cc8d5c
char const* const var_18
int32_t var_14
char const* const var_10
char* ecx_1

if (ecx != 0)
    void* eax_1 = sub_4badc0(ecx + 0x75b8, eax)
    int32_t i
    
    if (eax_1 != 0)
        i = *eax_1
    
    if (eax_1 == 0 || i == 0)
        return 0
    
    void* eax_2 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    int32_t* eax_4 = *(*(eax_2 + 0x72f8) + (((i s>> 4 | i) & *(eax_2 + 0x72fc)) << 2))
    
    if (eax_4 == 0)
        return 1
    
    while (i != *eax_4)
        eax_4 = eax_4[7]
        
        if (eax_4 == 0)
            return 1
    
    if (eax_4 == 0xfffffffc)
        return 1
    
    int32_t eax_6 = sub_4ba140(&eax_4[1], &var_8)
    
    if (eax_6 == 1)
        return eax_6 + 1
    
    int32_t* eax_8 = var_8
    eax = eax_8
    
    if (eax_8 == 0)
        if (eax_6 - 2 u<= 8)
            switch (eax_6)
                case 2
                    return 0xc
                case 4
                    return 0xd
                case 7
                    return 0xe
                case 0xa
                    return 0xf
        
        var_10 = "GetDailyImage"
        var_14 = 0x160e
    else
        int32_t* temp1_1 = eax
        eax -= 1
        
        if (temp1_1 == 1)
            if (eax_6 - 2 u<= 8)
                switch (eax_6)
                    case 2
                        return 8
                    case 4
                        return 9
                    case 7
                        return 0xa
                    case 0xa
                        return 0xb
            
            var_10 = "GetDailyImage"
            var_14 = 0x161c
        else
            int32_t* temp2_1 = eax
            eax -= 1
            
            if (temp2_1 == 1)
                if (eax_6 - 2 u<= 8)
                    switch (eax_6)
                        case 2
                            return 3
                        case 4
                            return 4
                        case 7
                            return 5
                        case 0xa
                            return 6
                
                var_10 = "GetDailyImage"
                var_14 = 0x162a
            else
                var_10 = "GetDailyImage"
                var_14 = 0x162d
    
    ecx_1 = "Halt"
    var_18 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp"
else
    var_10 = "GetClient"
    var_14 = 0x7b
    var_18 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_1 = "gClient"

sub_63b870(eax, &data_801800, ecx_1, var_18, var_14, var_10)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
