// 函数: sub_617bb0
// 地址: 0x617bb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_5cb070()

if (eax != 0)
    int32_t eax_1 = *(eax + 0xc)
    
    if (eax_1 == 0x11 || eax_1 == 2 || eax_1 == 0 || eax_1 == 0x17)
        return 0

int32_t var_1c = arg5
int32_t __saved_edx_4 = 0
int32_t* var_20 = &__saved_edx_4
uint32_t result = sub_6162f0(arg4, 0)
int32_t __saved_edx = __saved_edx_4
int32_t eax_3
int32_t ecx_2
eax_3, ecx_2 = sub_5cbb20(arg3)
char const* const var_24
int32_t var_20_1
char const* const var_1c_1
char* ecx_3

if (__saved_edx == 0)
    int32_t eax_6 = data_b80b08
    
    if (eax_6 == 1 || eax_6 == 2)
        return result
    
    eax_3 = eax_6 - 3
    
    if (eax_6 == 3)
        return result
    
    if (data_cc8d5c != 0)
        int32_t var_1c_4 = 0
        int32_t var_20_4 = ecx_2
        sub_5af930(eax_3, data_171e77c, ecx_2.b)
        return result
    
label_617cb5:
    var_1c_1 = "GetClient"
    var_20_1 = 0x7b
    var_24 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_3 = "gClient"
else
    if (__saved_edx == 1)
        if (data_cc8d5c == 0)
            goto label_617cb5
        
        int32_t var_1c_3 = 0
        int32_t var_20_3 = ecx_2
        sub_5af930(eax_3, data_171e6c4, ecx_2.b)
        return result
    
    if (__saved_edx == 2)
        if (data_cc8d5c == 0)
            goto label_617cb5
        
        int32_t var_1c_2 = 0
        int32_t var_20_2 = ecx_2
        sub_5af930(eax_3, data_171e6c0, ecx_2.b)
        return result
    
    var_1c_1 = "DomSoundUI_Select"
    var_20_1 = 0x309
    var_24 = "C:\x\ax2017\Jams\Dominion\code\DomSound.cpp"
    ecx_3 = "Halt"

sub_63b870(eax_3, &data_801800, ecx_3, var_24, var_20_1, var_1c_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
