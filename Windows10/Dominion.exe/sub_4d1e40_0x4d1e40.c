// 函数: sub_4d1e40
// 地址: 0x4d1e40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
char* esi = arg1
void* eax_2 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
sub_63d8d0(eax_2, esi)
data_cc8dc8
sub_4d8ad0(esi)
sub_4d46e0(7, 0)
uint32_t result = data_cc8d5c

if (result != 0)
    *(result + 0x75b0) = 1
    data_8db660 = 0x13
    char eax_3 = sub_4c5750()
    data_8dbfb8 = 0
    void* eax_4 = data_8dc144
    void** ecx_4
    ecx_4.b = eax_3 != 0
    data_8dbfb0 = ecx_4
    
    if (eax_4 != 0 && eax_4 != &data_801800)
        if (data_cf65bc != 0 && *eax_4 != 0)
            char* eax_5 = sub_63d4e0(&data_8dc144)
            int32_t temp1_1 = *(eax_5 + 4)
            *(eax_5 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
        
        data_8dc144 = &data_801800
    
    result = data_cc8d5c
    
    if (result != 0)
        if (*(result + 0x18) == 3)
            ecx_4.b = 1
            sub_4af000(ecx_4)
        
        int32_t var_24_1 = *(eax_2 + 0x4264)
        char* const _Source = &data_801800
        int32_t var_28 = *(eax_2 + 0x4260)
        char* _Source_1 = *eax_2
        
        if (_Source_1 != 0)
            _Source = _Source_1
        
        char _Destination
        strncpy(&_Destination, _Source, 0x10)
        result = data_cc8d5c
        char var_11_1 = 0
        
        if (result != 0)
            int32_t eax_7 = *(result + 0x14)
            void* ecx_7 = data_147abf4
            
            if (eax_7 != 0)
                uint32_t edx_3 = zx.d(eax_7.w)
                
                if (edx_3 u< *(ecx_7 + 4))
                    esi = edx_3 * 0x64 + *ecx_7
                    
                    if (*(esi + 0x60) == eax_7 && esi != 0)
                        int32_t var_3c_1 = 0xf42bf
                        sub_689e00(eax_7, 0x18, &esi[0x50])
                        sub_689be0(&var_28, 0x18, &esi[0x50], &var_28)
            
            data_cc8dc8
            sub_4d8ad0(esi)
            result = data_cc8d5c
            
            if (result != 0)
                *(result + 0x75b0) = 1
                CookieCheckFunction(result)
                return result

sub_63b870(result, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
    0x7b, "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
