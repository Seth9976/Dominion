// 函数: sub_759b57
// 地址: 0x759b57
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = 0x14
int32_t var_8 = 0x8c0500
enum _EXCEPTION_DISPOSITION (* var_10)(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, 
    struct _CONTEXT* arg3, int32_t arg4) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t entry_ebx
int32_t var_2c = entry_ebx
uint32_t var_30 = arg1
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_4 = 0x8c0500 ^ __security_cookie_1
void* var_38 = __security_cookie_1 ^ &var_4
int32_t* var_1c = &var_38
void* const var_3c = &data_759b63
int32_t var_8_5 = 0xfffffffe
int32_t var_c_1 = var_8_4
fsbase->NtTib.ExceptionList = &ExceptionList
var_3c = 1
char eax = ___scrt_initialize_crt(var_3c)
char eax_1
int32_t eax_2

if (eax != 0)
    entry_ebx.b = 0
    char var_1d_1 = 0
    int32_t var_8_1 = 0
    eax_1 = ___scrt_acquire_startup_lock()
    eax_2 = data_cc89e0

void* const* esp_1

if (eax == 0 || eax_2 == 1)
    var_3c = 7
    esp_1 = &var_3c
    sub_75a095(var_3c)
else
    if (eax_2 != 0)
        entry_ebx.b = 1
        char var_1d_2 = 1
    else
        data_cc89e0 = 1
        var_3c = &data_77c380
        int32_t var_40_1 = 0x77c374
        
        if (_initterm_e(0x77c374, var_3c) != 0)
            int32_t var_8_2 = 0xfffffffe
            return sub_759cad(ebp_1, arg2, var_30, var_2c) __tailcall
        
        var_3c = &data_77c370
        int32_t var_40_2 = 0x775884
        _initterm(0x775884, var_3c)
        data_cc89e0 = 2
    
    var_3c = eax_1.d
    ___scrt_release_startup_lock(var_3c.b)
    
    if (data_1a9b270 != 0)
        var_3c = &data_1a9b270
        
        if (___scrt_is_nonwritable_in_current_image(var_3c) != 0)
            int32_t esi = data_1a9b270
            var_3c = nullptr
            int32_t var_40_3 = 2
            int32_t var_44_1 = 0
            esi(0, 2, var_3c)
    
    if (data_1a9b26c != 0)
        var_3c = &data_1a9b26c
        
        if (___scrt_is_nonwritable_in_current_image(var_3c) != 0)
            var_3c = data_1a9b26c
            _register_thread_local_exe_atexit_callback(var_3c)
    
    void* esi_1 = zx.d(___scrt_get_show_window_mode())
    char* eax_9 = _get_narrow_winmain_command_line()
    var_3c = esi_1
    char* var_40_4 = eax_9
    int32_t var_44_2 = 0
    struct DOS_Header* const var_48_1 = &__dos_header
    esp_1 = &var_38
    arg1 = sub_6c82a0(&__dos_header, SW_HIDE)
    
    if (sub_75a1df() != 0)
        if (entry_ebx.b == 0)
            _cexit()
        
        var_3c = nullptr
        int32_t var_40_5 = 1
        ___scrt_uninitialize_crt(1, var_3c.b)
        int32_t var_8_3 = 0xfffffffe
        return sub_759cad(ebp_1, arg2, var_30, var_2c) __tailcall

*(esp_1 - 4) = arg1
exit()
noreturn
