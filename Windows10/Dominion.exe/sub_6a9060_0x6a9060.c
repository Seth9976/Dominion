// 函数: sub_6a9060
// 地址: 0x6a9060
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

enum WAIT_EVENT eax = WaitForSingleObject(arg1[3], 0xffffffff)
int32_t var_10_1
char const* const var_c

if (eax == WAIT_OBJECT_0)
    arg1[1](arg1[2])
    *arg1 = 2
    eax = ReleaseSemaphore(arg1[4], 1, nullptr)
    
    if (eax != WAIT_OBJECT_0)
        return 0
    
    var_c = "mutex_release"
    var_10_1 = 0x83
else
    var_c = "mutex_lock"
    var_10_1 = 0x78

sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Engine\Coroutine.cpp", var_10_1, var_c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
