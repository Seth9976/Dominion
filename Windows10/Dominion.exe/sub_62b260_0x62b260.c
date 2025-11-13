// 函数: sub_62b260
// 地址: 0x62b260
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = data_147ac2c
int32_t edx = 0
int32_t* eax_1 = *eax
int32_t esi_1

while (true)
    esi_1 = *eax_1
    
    if (esi_1 != 0)
        break
    
    edx += 1
    eax_1 = &eax_1[1]
    
    if (edx u> eax[1])
        eax_1.b = 1
        return eax_1

int32_t var_8 = esi_1
char eax_15

while (true)
    void* esi_2 = sub_6a01a0(&var_8)[1]
    uint32_t eax_4 = *(esi_2 + 4) - 2
    
    if (eax_4 u<= 0x24)
        eax_4 = zx.d(lookup_table_62b428[eax_4])
        
        switch (eax_4)
            case 0
            label_62b388:
                int32_t* eax_12 = sub_64bfd0(0xc)
                eax_12[3] += 1
                
                if (*eax_12 == 0)
                    sub_64be70(eax_12)
                
                int32_t* ecx_7 = *eax_12
                *eax_12 = *ecx_7
                ecx_7[2] = 0
                *ecx_7 = esi_2
                ecx_7[1] = 0
                ecx_7[2] = arg1[1]
                eax_4 = arg1[1]
                
                if (eax_4 == 0)
                    *arg1 = ecx_7
                else
                    *(eax_4 + 4) = ecx_7
                
                arg1[2] += 1
                arg1[1] = ecx_7
                goto label_62b3d1
            case 1
                char* eax_5 = *(esi_2 + 0x20)
                char* const ecx = &data_801800
                
                if (eax_5 != 0)
                    ecx = eax_5
                
                if (strstr(ecx, "card_gen") != 0)
                    goto label_62b3d1
                
                char* eax_6 = *(esi_2 + 0x20)
                char* const ecx_1 = &data_801800
                
                if (eax_6 != 0)
                    ecx_1 = eax_6
                
                if (strstr(ecx_1, "non_atlas") != 0)
                    goto label_62b3d1
                
                uint8_t* eax_7 = *(esi_2 + 0x20)
                uint8_t* ecx_2 = &data_801800
                
                if (eax_7 != 0)
                    ecx_2 = eax_7
                
                if (strstr(ecx_2, "campaign") != 0)
                    goto label_62b3d1
                
                uint8_t* eax_8 = *(esi_2 + 0x20)
                uint8_t* ecx_3 = &data_801800
                
                if (eax_8 != 0)
                    ecx_3 = eax_8
                
                if (strstr(ecx_3, "box_art") != 0)
                    goto label_62b3d1
                
                goto label_62b388
            case 2
            label_62b3d1:
                
                if (var_8 != 0)
                    continue
                
                eax_4.b = 1
                return eax_4
            case 3
                char* eax_9 = *(esi_2 + 0x20)
                char* const ecx_4 = &data_801800
                
                if (eax_9 != 0)
                    ecx_4 = eax_9
                
                if (strstr(ecx_4, "sound_load_always") != 0)
                    goto label_62b388
                
                char* eax_11 = *(esi_2 + 0x20)
                char* const ecx_5 = &data_801800
                
                if (eax_11 != 0)
                    ecx_5 = eax_11
                
                if (strstr(ecx_5, "sound_load_game") == 0)
                    goto label_62b3d1
                
                goto label_62b388
    
    sub_63b870(eax_4, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
        0x10109, "GameSpecific_GetAssetsToLoad")
    eax_15 = sub_63bc30()
    break

if (eax_15 != 0)
    breakpoint

sub_63bb00()
noreturn
