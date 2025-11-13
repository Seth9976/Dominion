// 函数: sub_5cf960
// 地址: 0x5cf960
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*arg4 = zx.o(0)
uint32_t eax = *(arg3 + 0x2c)
int32_t var_18
int32_t eax_5
void* eax_8
char const* const ecx_3

switch (eax)
    case 0
        eax = *(arg3 + 0xa4)
        
        if (eax != 6)
            if (eax == 0x3f1)
                eax_5 = *(arg3 + 0xa0)
                goto label_5cf9f0
            
            char const* const var_14_5 = "CalcPodIconWhere"
            var_18 = 0x15a7
            goto label_5cfc27
        
        uint32_t ebx_2 = zx.d((*(arg3 + 0x98)).w)
        *arg4 = 3
        
        if (ebx_2 u>= 0x320)
            sub_591930()
        
        eax_8 = sub_5cc6c0(*(ebx_2 * 0x64 + &data_b82524))
    case 3
        eax = *(arg3 + 0x58)
        
        if (eax == 0xffffffff)
            char const* const var_14_6 = "CalcPodIconWhere"
            var_18 = 0x15ab
            ecx_3 = "gfx.pile.owner != PLAYER_NONE"
            goto label_5cfc36
        
        bool cond:1_1 = *(arg3 + 0x370) == 1
        *arg4 = 1
        *(arg4 + 4) = eax
        
        if (cond:1_1)
            *(arg4 + 0xc) = *(arg3 + 0x384)
            return arg4
        
        char const* const var_14_7 = "CalcPodIconWhere"
        var_18 = 0x15b0
        ecx_3 = "gfx.move.locCurrent.type == LOC_USER"
        goto label_5cfc36
    case 4
        int32_t eax_1 = *(arg3 + 0x1bc)
        int32_t eax_3
        
        if (eax_1 == 0x3f1)
            eax_3 = *(arg3 + 0x1c4)
            *arg4 = 1
            *(arg4 + 4) = eax_3
        else if (eax_1 == 0x474)
            eax_3 = *(arg3 + 0x1c0)
            *arg4 = 2
            *(arg4 + 4) = eax_3
        else
            *(arg4 + 4) = eax_1
            int32_t eax_2 = *(arg3 + 0x1c4)
            *arg4 = 3
            *(arg4 + 8) = eax_2
        
        if (*(arg3 + 0x370) == 1)
            *(arg4 + 0xc) = *(arg3 + 0x384)
            return arg4
        
        *(arg4 + 0xc) = 0
        return arg4
    case 6
        int32_t ecx = *(arg3 + 0x1ec)
        
        if (ecx == 0)
            eax_5 = *(arg3 + 0x1e4)
        label_5cf9f0:
            bool cond:5_1 = *(arg3 + 0x370) != 1
            *arg4 = 1
            *(arg4 + 4) = eax_5
            
            if (cond:5_1)
                return arg4
            
            *(arg4 + 0xc) = *(arg3 + 0x384)
            return arg4
        
        eax_8 = sub_5cf840(ecx)
        
        if (eax_8 == 0)
            *arg4 = 0
            return arg4
        
        *arg4 = 3
    case 7
        int32_t eax_18 = *(arg3 + 0x224)
        
        if (eax_18 == 0)
            bool cond:0_1 = *(arg3 + 0x370) == 1
            eax = *(arg3 + 0x228)
            *arg4 = 1
            *(arg4 + 4) = eax
            
            if (cond:0_1)
                *(arg4 + 0xc) = *(arg3 + 0x384)
                return arg4
            
            char const* const var_14_4 = "CalcPodIconWhere"
            var_18 = 0x156d
            ecx_3 = "gfx.move.locCurrent.type == LOC_USER"
            goto label_5cfc36
        
        if (eax_18 == 1)
            bool cond:2_1 = *(arg3 + 0x370) == 1
            *(arg4 + 4) = *(arg3 + 0x22c)
            eax = *(arg3 + 0x230)
            *arg4 = 3
            *(arg4 + 8) = eax
            
            if (cond:2_1)
                *(arg4 + 0xc) = *(arg3 + 0x384)
                return arg4
            
            char const* const var_14_3 = "CalcPodIconWhere"
            var_18 = 0x1575
            ecx_3 = "gfx.move.locCurrent.type == LOC_USER"
            goto label_5cfc36
        
        eax = eax_18 - 2
        
        if (eax_18 != 2)
            char const* const var_14_1 = "CalcPodIconWhere"
            var_18 = 0x1583
            goto label_5cfc27
        
        bool cond:3_1 = *(arg3 + 0x370) == 1
        eax = *(arg3 + 0x228)
        *arg4 = 2
        *(arg4 + 4) = eax
        
        if (cond:3_1)
            *(arg4 + 0xc) = *(arg3 + 0x384)
            return arg4
        
        char const* const var_14_2 = "CalcPodIconWhere"
        var_18 = 0x157b
        ecx_3 = "gfx.move.locCurrent.type == LOC_USER"
        goto label_5cfc36
    case 8
        eax = sub_5cba00(*(arg3 + 0x240))
        int32_t ecx_2 = *(eax + 0x2c)
        
        if (ecx_2 == 3)
            *(arg4 + 4) = *(eax + 0x5c)
            *(arg4 + 8) = 0xffffffff
            *arg4 = ecx_2
            return arg4
        
        if (ecx_2 == 0)
            *(arg4 + 4) = *(eax + 0x98)
            *arg4 = 2
            return arg4
        
        char const* const var_14 = "CalcPodIconWhere"
        var_18 = 0x155c
        ecx_3 = "source.type == DOMGFX_CARD"
        goto label_5cfc36
    default
        char const* const var_14_8 = "CalcPodIconWhere"
        var_18 = 0x15b4
    label_5cfc27:
        ecx_3 = "Halt"
    label_5cfc36:
        sub_63b870(eax, &data_801800, ecx_3, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            var_18, "CalcPodIconWhere")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

bool cond:4_1 = *(arg3 + 0x370) != 1
int32_t eax_9 = *(eax_8 + 0x5c)
*(arg4 + 8) = 0xffffffff
*(arg4 + 4) = eax_9

if (cond:4_1)
    *(arg4 + 0xc) = 0
    return arg4

*(arg4 + 0xc) = *(arg3 + 0x384)
return arg4
