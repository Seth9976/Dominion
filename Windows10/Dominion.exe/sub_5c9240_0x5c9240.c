// 函数: sub_5c9240
// 地址: 0x5c9240
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t edx
ecx, edx = __chkstk(0x1018)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
int32_t* eax_2 = data_ccea0c
int32_t var_18_1
char const* const var_14
char* ecx_1

if (eax_2 != 0)
    eax_2 = eax_2(ecx)
    int32_t* esi = eax_2
    
    if (esi[2] == 0)
        int32_t ebx_1 = esi[1]
        uint32_t result_2 = 0
        int32_t ecx_2 = *esi
        uint32_t result_1 = 0
        int32_t* var_101c_1 = nullptr
        int32_t var_1010[0x3fd]
        
        if (ebx_1 s> 0)
            do
                if (ecx_2 == 0)
                    var_14 = "PileUpdateStacks"
                    var_18_1 = 0x166
                    ecx_1 = "hCur"
                    goto label_5c94c5
                
                if (result_2 s>= 0x400)
                    var_14 = "PileUpdateStacks"
                    var_18_1 = 0x167
                    ecx_1 = "numItems < 1024"
                    goto label_5c94c5
                
                var_1010[result_2] = ecx_2
                result_2 += 1
                bool cond:0_1 = data_ccea08 == 0
                result_1 = result_2
                
                if (cond:0_1)
                label_5c94af:
                    var_14 = "GetItemData"
                    var_18_1 = 0x3a
                    goto label_5c94b6
                
                void* eax_4 = data_ccea10(ecx_2)
                ebx_1 = esi[1]
                ecx_2 = *(eax_4 + 4)
                eax_2 = var_101c_1 + 1
                var_101c_1 = eax_2
            while (eax_2 s< ebx_1)
        
        if (edx == 1)
            int32_t eax_8
            int32_t edx_1
            edx_1:eax_8 = sx.q(ebx_1)
            
            if ((eax_8 - edx_1) s>> 1 s> 0)
                int32_t i = 0
                int32_t eax_13
                int32_t edx_2
                
                do
                    int32_t ecx_3 = var_1010[i]
                    int32_t ebx_2 = ebx_1 - i
                    var_1010[i] = (&result_1)[ebx_2]
                    i += 1
                    (&result_1)[ebx_2] = ecx_3
                    ebx_1 = esi[1]
                    edx_2:eax_13 = sx.q(ebx_1)
                while (i s< (eax_13 - edx_2) s>> 1)
                result_2 = result_1
        else if (edx != 0)
            int32_t eax_17 = result_2 << 2 s>> 2
            sub_5c94e0(eax_17, &var_1010[result_2], &var_1010, eax_17, edx)
        
        uint32_t result = 0
        esi[3] = 0
        result_1 = 0
        
        if (result_2 s<= 0)
        label_5c949d:
            CookieCheckFunction(result)
            return result
        
        while (true)
            int32_t ebx_3 = var_1010[result]
            eax_2 = esi[2]
            
            if (eax_2 == 0)
            label_5c944b:
                
                if (data_ccea08 == 0)
                    goto label_5c94af
                
                void* eax_21 = data_ccea10(ebx_3)
                *(eax_21 + 8) = 0
                *(eax_21 + 0xc) = 1
                *(eax_21 + 0x14) = esi[2]
                esi[2] = ebx_3
                *(eax_21 + 0x10) = 0
                esi[3] += 1
            else
                int32_t ecx_6 = data_ccea08
                
                if (ecx_6 == 0)
                    var_14 = "ItemCompare"
                    var_18_1 = 0x16
                    break
                
                eax_2 = ecx_6(eax_2, ebx_3, 0)
                
                if (eax_2 != 0 || arg2 == eax_2)
                    goto label_5c944b
                
                if (data_ccea08 == eax_2)
                    goto label_5c94af
                
                eax_2 = data_ccea10(esi[2])
                
                if (data_ccea08 == 0)
                    goto label_5c94af
                
                void* eax_19 = data_ccea10(ebx_3)
                *(eax_19 + 8) = esi[2]
                *(eax_19 + 0xc) = eax_2[3] + 1
                *(eax_19 + 0x14) = eax_2[5]
                *(eax_19 + 0x10) = 0
                esi[2] = ebx_3
            
            result = result_1 + 1
            result_1 = result
            
            if (result s>= result_2)
                goto label_5c949d
        
    label_5c94b6:
        ecx_1 = "gPile.fnItemCompare"
    else
        var_14 = "PileUpdateStacks"
        var_18_1 = 0x158
        ecx_1 = "pileData.headStacked == HITEM_NULL"
else
    var_14 = "GetPileData"
    var_18_1 = 0x34
    ecx_1 = "gPile.fnGetPileData"

label_5c94c5:
sub_63b870(eax_2, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\PileLayout.cpp", var_18_1, 
    var_14)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
