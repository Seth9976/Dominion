// 函数: sub_5887c0
// 地址: 0x5887c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_28
char const* const var_24_1
char* ecx

if (arg2 != 0xffffffff)
    void* edi_2 = arg2 * 0x5a30 + arg3
    
    if (*(edi_2 + 0x172d4) == 0)
        if (arg4 != 0 || *(edi_2 + 0x172d8) == 0)
            return nullptr
        
        sub_588490(arg3, arg2)
        
        if (*(edi_2 + 0x172d4) == 0)
            return nullptr
    
    if (*(edi_2 + 0x17568) s>= 0x40)
    label_58896c:
        arg1 = *(edi_2 + 0x172d4)
        
        if (arg1 != 0)
            return arg1
        
        var_24_1 = "TopDeckCard"
        var_28 = 0x367d
        ecx = "id != CARDID_NULL"
    else
        int32_t ecx_1 = arg3[0x350]
        
        if (ecx_1 == 0 || (arg3[0x351].b & 0x80) != 0)
            goto label_58896c
        
        int32_t eax = sub_5b06a0(ecx_1)
        void* edx = *(edi_2 + 0x17568)
        void* eax_1 = *(eax + (((arg2 << 8) + edx) << 2))
        
        if (eax_1 == 0)
            goto label_58896c
        
        arg1 = edx + 1
        *(edi_2 + 0x17568) = arg1
        void* edi_5
        
        for (int32_t i = *(edi_2 + 0x172d4); i != 0; i = *(edi_5 + 0x1aa4))
            uint32_t edi_3 = zx.d(i.w)
            
            if (edi_3 u>= 0x320)
                sub_591930()
            
            arg1 = eax_1
            edi_5 = edi_3 * 0x64 + arg3
            
            if (*(edi_5 + 0x1a4c) == arg1)
                int32_t* eax_3 = sub_5722c0(sub_5723a0(arg1, i, arg3, nullptr), 0x3eb, arg3, arg2)
                
                if (edi_3 u>= 0x320)
                    sub_591930()
                
                int32_t edx_2 = arg3[0x66b]
                arg3[0x66b] = edx_2 + 1
                *(edi_5 + 0x1a54) = edx_2
                *(edi_5 + 0x1a50) = 0x3eb
                *(edi_5 + 0x1a74) = arg2
                *(edi_5 + 0x1a70) = arg2
                *(edi_5 + 0x1a78) = arg2
                *(edi_5 + 0x1aa4) = *eax_3
                *eax_3 = i
                
                if (i == 0)
                    goto label_58896c
                
                arg1 = edi_2
                
                if (*(arg1 + 0x172d4) == i)
                    return i
                
                var_24_1 = "TopDeckCard"
                var_28 = 0x3678
                ecx = "GetPileHead(g, CW_PLAYER_DECK, who) == forceDraw"
                goto label_588993
        
        if (arg3[0x541] == 3)
            goto label_58896c
        
        var_24_1 = "TryDoCampaignDraw"
        var_28 = 0x3660
        ecx = "Halt"
else
    var_24_1 = "GetPileHead"
    var_28 = 0x33e
    ecx = "who != PLAYER_NONE"

label_588993:
sub_63b870(arg1, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_28, var_24_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
