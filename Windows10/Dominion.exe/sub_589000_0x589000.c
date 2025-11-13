// 函数: sub_589000
// 地址: 0x589000
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t var_8 = eax_1
uint32_t var_c94 = arg2
uint32_t i = 0

if (arg1[0x34e] s> 0)
    void* var_c90_1 = &arg1[0x5d3f]
    
    do
        int32_t ebx_1
        ebx_1.b = i == arg2
        uint32_t eax_4 = ebx_1 - *(var_c90_1 - 4)
        sub_590760(eax_4, i, arg1, 1, eax_4, 0, 0x42)
        sub_590760(var_c90_1, i, arg1, 2, ebx_1 - *var_c90_1, 0, 0x42)
        uint32_t eax_7 = neg.d(*(var_c90_1 - 8))
        eax_1 =
            sub_576b30(sub_590760(eax_7, i, arg1, 0, eax_7, 0, 0x42), var_c94, arg1, 0x28, 0, 0, 0)
        
        if (eax_1 s<= 0)
            uint32_t eax_10 = neg.d(*(var_c90_1 + 4))
            eax_1 = sub_590760(eax_10, i, arg1, 3, eax_10, 0, 0x42)
        
        arg2 = var_c94
        i += 1
        var_c90_1 += 0x5a30
    while (i s< arg1[0x34e])

void* edi_1 = arg2 * 0x5a30 + arg1

if (*(edi_1 + 0x17504) != 0)
    eax_1 = sub_591930()

if (*(edi_1 + 0x17508) != 0)
    eax_1 = sub_591930()

if (*(edi_1 + 0x1750c) != 0)
    eax_1 = sub_591930()

if (*(edi_1 + 0x17510) != 0)
    eax_1 = sub_591930()

if (*(edi_1 + 0x1752c) != 0)
    eax_1 = sub_591930()

if (*(edi_1 + 0x17548) != 0)
    eax_1 = sub_591930()

if (*(edi_1 + 0x1754c) != 0)
    eax_1 = sub_591930()

if (*(edi_1 + 0x17544) != 0)
    eax_1 = sub_591930()

if (*(edi_1 + 0x1753c) != 0)
    eax_1 = sub_591930()

*(edi_1 + 0x17558) = 0
int32_t i_2 =
    *sub_5722c0(sub_581450(eax_1, var_c94, arg1, 2, 0xffffffff, 0xffffffff), 0x451, arg1, var_c94)
uint32_t ebx_6
int32_t i_1

if (i_2 == 0)
    do
        i_1 = 0
    label_5891c4:
        uint32_t var_c98
        
        if (i_2 == 0)
            void var_cec
            memset(&var_cec, 0, 0x48)
            var_c98 = 0
            int32_t result = sub_580700(arg1, &var_c98, 1, &var_cec, 0, nullptr, 0, nullptr)
            CookieCheckFunction(result)
            return result
        
        uint32_t eax_14 = zx.d(i_2.w)
        
        if (eax_14 u>= 0x320)
            sub_591930()
        
        void* eax_17 = eax_14 * 0x64 + 0x1a54 + arg1
        var_c98 = *eax_17
        void* var_c9c_1 = nullptr
        void* var_c90_3 = nullptr
        
        if (sub_582de0(0, i_2, arg1, 0x451) == 0)
            int32_t var_c8c
            uint32_t eax_21 = sub_590990(&var_c8c, 0xffffffff, arg1, 5, &var_c8c)
            
            if (eax_21 != 0)
                if (eax_21 != 1)
                    eax_21 = sub_591930()
                
                if (i_2 == var_c8c)
                    eax_21 = sub_591930()
            
            sub_5822e0(eax_21, var_c94, arg1, i_2, 8, 0x3e9, nullptr, 0, 0, 0, 0, 0, nullptr, 0, 
                var_c9c_1, var_c90_3)
        
        if (var_c98 != *eax_17)
            sub_63b870(eax_17, &data_801800, "idxBefore == c.moveIdx", 
                "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x3768, "StartOfTurnPhase")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        i_2 = i_1
    while (i_1 == 0)
    
    ebx_6 = zx.d(i_1.w)
else
    ebx_6 = zx.d(i_2.w)

if (ebx_6 u>= 0x320)
    sub_591930()

i_1 = arg1[ebx_6 * 0x19 + 0x6a9]
goto label_5891c4
