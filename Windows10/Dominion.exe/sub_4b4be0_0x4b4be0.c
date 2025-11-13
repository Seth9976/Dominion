// 函数: sub_4b4be0
// 地址: 0x4b4be0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg3
void* esi = arg4
int32_t edx = *(esi + 0x10)
void* ecx = esi + 0x10
int32_t eax = arg3[2]
int32_t var_1c
char const* const var_18
int32_t eax_1
char* ecx_1

if (eax s< edx || eax == 0)
    uint32_t ebx_1 = edx * 2
    eax_1 = 0x1000
    
    if (ebx_1 s< 0x1000)
        ebx_1 = 0x1000
    
    if (*arg3 == 0)
        *arg3 = sub_687730(ebx_1)
        ecx = esi + 0x10
        arg3[2] = ebx_1
        arg4 = esi + 0x10
        goto label_4b4c46
    
    var_18 = "AllocateLog"
    var_1c = 0xb68
    ecx_1 = "log.logBytes == NULL"
else
    arg4 = ecx
label_4b4c46:
    
    if (*(esi + 0x14) == 0)
        arg3[5] = 0
    
    memcpy(*arg3 + *(esi + 0x14), *(esi + 8), *ecx)
    eax_1 = *(esi + 0x14) + *arg4
    arg3[3] = eax_1
    arg3[4] = eax_1
    
    if (arg3[5] s<= eax_1)
        *(arg2 + 4) = *(esi + 0x18)
        int32_t result = *(esi + 0x1c)
        *(arg2 + 8) = result
        return result
    
    var_18 = "SetLog"
    var_1c = 0xb8e
    ecx_1 = "log.logRead <= log.logSizeWritten"

sub_63b870(eax_1, &data_801800, ecx_1, "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp", 
    var_1c, var_18)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
