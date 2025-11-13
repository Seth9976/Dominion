// 函数: sub_6006c0
// 地址: 0x6006c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void var_2c
uint32_t eax_1 = __security_cookie ^ &var_2c
uint32_t var_c = eax_1
void* esi = data_cc8d5c
char const* const var_44
int32_t var_40
char const* const var_3c_1
char* ecx

if (esi != 0)
    eax_1 = *(esi + 0x5068)
    
    if (eax_1 != 5)
        int32_t var_28
        
        if (eax_1 == 1)
            sub_5cbf20()
            sub_4d46e0(2, 0)
            sub_4d46e0(5, data_8db664 != 0x29)
            int32_t* eax_2 = sub_4b9480()
            sub_4b4cc0(eax_2, arg1, eax_2, &var_28)
            int32_t* eax_3 = sub_4b9480()
            *(esi + 0x506c)
            eax_1 = TPI1::QueryTiForCVRecord(eax_3)
            CookieCheckFunction(eax_1)
            return eax_1
        
        if (eax_1 == 2)
            if (*(esi + 0x18) == 3)
                int32_t* eax_4 = sub_4b9480()
                void* edx_4 = data_147abf4
                int32_t var_20_1 = arg1
                var_28 = arg2
                int32_t var_24_1 = *eax_4
                eax_1 = *(esi + 0x14)
                
                if (eax_1 != 0)
                    uint32_t ecx_5 = zx.d(eax_1.w)
                    
                    if (ecx_5 u< *(edx_4 + 4))
                        void* esi_2 = ecx_5 * 0x64 + *edx_4
                        
                        if (*(esi_2 + 0x60) == eax_1 && esi_2 != 0)
                            int32_t var_3c_3 = 0xf42b6
                            sub_689e00(eax_1, 0xc, esi_2 + 0x50)
                            void* eax_7 = sub_689be0(&var_28, 0xc, esi_2 + 0x50, &var_28)
                            CookieCheckFunction(eax_7)
                            return eax_7
            
            CookieCheckFunction(eax_1)
            return eax_1
        
        var_3c_1 = "DomGameUndo"
        var_40 = 0x91fc
    else
        var_3c_1 = "DomGameUndo"
        var_40 = 0x91df
    
    ecx = "Halt"
    var_44 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
else
    var_3c_1 = "GetClient"
    var_40 = 0x7b
    var_44 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx = "gClient"

sub_63b870(eax_1, &data_801800, ecx, var_44, var_40, var_3c_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
