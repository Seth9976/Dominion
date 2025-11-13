// 函数: sub_587160
// 地址: 0x587160
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t esi = arg2 * 0x5a30
int32_t eax_4 = *(esi + arg3 + 0x174fc)
uint32_t eax_5 = sub_576b30(eax_4, arg2, arg3, 0x31, 0, 0, 0)
uint32_t esi_1 = *(esi + arg3 + 0x174f8)
uint32_t eax_6
int32_t esi_3

if (eax_5 s<= 0)
    uint32_t eax_7 = sub_576b30(eax_5, arg2, arg3, 0x12, 0, 0, 0)
    
    if (eax_7 s<= 0)
        eax_7 = sub_583fc0(eax_7, arg2, arg3, 0xe00)
        esi_1 += eax_7
    
    eax_6 = sub_576dd0(eax_7, arg2, arg3, 0x34, 0)
    
    if (eax_6 s< esi_1)
        esi_1 = eax_6
    
    esi_3 = eax_4 + esi_1
else
    esi_3 = eax_4 + esi_1
    eax_6 = sub_576b30(eax_5, arg2, arg3, 0x12, 0, 0, 0)
    
    if (eax_6 s<= 0)
        eax_6 = sub_583fc0(eax_6, arg2, arg3, 0xe00)
        esi_3 += eax_6

if ((esi_3 s> 0 || (arg5 & 2) != 0) && sub_583fc0(eax_6, arg2, arg3, 0xc00) == 0)
    int32_t var_e5c
    sub_577c10(&var_e5c, arg2, arg3, &var_e5c)
    void* ecx_6 = arg4
    int32_t i = 0
    int32_t i_1 = 0
    uint32_t result = 0
    
    if (*(ecx_6 + 0xc80) s> 0)
        void* var_e68_1 = arg6
        
        do
            void* eax_10 = ecx_6 + (i << 2)
            char var_e5d
            int32_t var_e58
            int32_t var_e54
            char var_e50
            int32_t var_e4f
            int32_t var_1cc
            int32_t var_1c8
            int32_t var_1c4
            int32_t var_1c0
            void var_1bc
            void var_154
            int32_t var_ec
            void var_e8
            int32_t var_80
            void var_7c
            uint32_t var_14
            char eax_11 = sub_5782d0(eax_10, arg2, arg3, *eax_10, &var_e5d, var_e5c, var_e58, 
                var_e54, var_e50, var_e4f.b, &var_e4f:3, var_1cc, var_1c8, &var_1bc, &var_154, 
                var_ec, &var_e8, var_80, &var_7c, var_14, var_1c4, var_1c0)
            
            if (eax_11 != 0)
                int32_t* eax_12 = var_e68_1
                result += 1
                bool cond:0_1 = var_e5d == 0
                var_e68_1 = &eax_12[2]
                *eax_12 = *eax_10
                eax_12[1] = 0
                
                if (not(cond:0_1))
                    eax_12[1] = 1
            
            ecx_6 = arg4
            i = i_1 + 1
            i_1 = i
        while (i s< *(ecx_6 + 0xc80))
    
    if ((arg5 & 1) != 0)
        void* eax_18 = arg6 + (result << 3)
        result += sub_578710(eax_18, arg2, arg3, eax_18, &var_e5c)
    
    if (result == 0 || *(arg6 + (result << 3) - 8) s> 0)
        CookieCheckFunction(result)
        return result
    
    sub_63b870(arg6, &data_801800, "numBuyables == 0 || buyables[numBuyables - 1].which > 0", 
        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x32c2, "ComputeBuyables")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

CookieCheckFunction(0)
return 0
