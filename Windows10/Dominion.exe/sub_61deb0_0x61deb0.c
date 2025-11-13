// 函数: sub_61deb0
// 地址: 0x61deb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char const* const var_10
int32_t var_c
char const* const var_8
void* eax
char* ecx_1

if (data_171efd0 == 0)
    EnterCriticalSection(&data_b4a600)
    EnterCriticalSection(&data_b4a5e8)
    void* i = data_b4a5c0
    
    for (void* eax_2 = data_b4a5c4 * 0x510c + i; i u< eax_2; i += 0x510c)
        if ((*(i + 0x5108) & 0xffff0000) != 0)
            while (i != 0xffffffff)
                sub_5ac1b0(*(i + 0x5108))
                i += 0x510c
                int32_t eax_4 = data_b4a5c4 * 0x510c + data_b4a5c0
                
                if (i u>= eax_4)
                    break
                
                while ((*(i + 0x5108) & 0xffff0000) == 0)
                    i += 0x510c
                    
                    if (i u>= eax_4)
                        goto label_61df72
            
            break
    
label_61df72:
    sub_5ac840(&data_b4a5c0)
    int32_t* i_1 = data_b4a5dc
    
    while (i_1 != 0)
        int32_t* i_2 = i_1
        i_1 = i_1[1]
        sub_64c080(i_2, 0xc)
    
    eax = data_b4a618
    data_b4a5e4 = 0
    data_b4a5dc = 0
    data_b4a5e0 = 0
    
    if (*(eax + 4) == 0)
        LeaveCriticalSection(&data_b4a5e8)
        return LeaveCriticalSection(&data_b4a600)
    
    var_8 = "DomMapClearCache"
    var_c = 0x1337
    var_10 = "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp"
    ecx_1 = "gMapGlobals.threadData->threadState == DOMMAPTHREAD_NONE"
else
    var_8 = "CampaignCacheClear"
    var_c = 0xdf84
    var_10 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_1 = "gCampaignDlg.hMap == DATAID_NULL"

sub_63b870(eax, &data_801800, ecx_1, var_10, var_c, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
