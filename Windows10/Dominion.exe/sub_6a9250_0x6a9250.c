// 函数: sub_6a9250
// 地址: 0x6a9250
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
HANDLE hObject = arg1[4]
HANDLE ebx = arg1[3]
HANDLE esi = arg1[5]
BOOL eax = *arg1
int32_t var_1c
char const* const var_18

switch (eax)
    case 0
        *arg1 = 3
        eax = ReleaseSemaphore(ebx, 1, nullptr)
        
        if (eax != 0)
            goto label_6a929d
        
        var_18 = "mutex_release"
        var_1c = 0x83
        goto label_6a92ea
    case 1
        *arg1 = 3
    label_6a929d:
        WaitForSingleObject(esi, 0xffffffff)
        CloseHandle(esi)
        data_147b068 = 0
        CloseHandle(ebx)
        CloseHandle(hObject)
        return sub_64c080(arg1, 0x18)
    case 2
        goto label_6a929d
    default
        var_18 = "co_destroy_android10"
        var_1c = 0x15a
    label_6a92ea:
        sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Engine\Coroutine.cpp", var_1c, var_18)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
