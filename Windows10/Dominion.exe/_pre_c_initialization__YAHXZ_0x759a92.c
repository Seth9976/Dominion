// 函数: ?pre_c_initialization@@YAHXZ
// 地址: 0x759a92
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

_set_app_type(_crt_gui_app)
_set_fmode(0x4000)
*__p__commode() = 0

if (___scrt_initialize_onexit_tables(1) != 0)
    __fnclex()
    sub_75a38b()
    _atexit(sub_75a3b7)
    
    if (_configure_narrow_argv(_crt_argv_unexpanded_arguments) == 0)
        sub_75a329()
        
        if (sub_75a373() != 0)
            __setusermatherr(sub_524890)
        
        __initialize_default_precision()
        _configthreadlocale(0)
        
        if (sub_4ab040() != 0)
            _initialize_narrow_environment()
        
        j_sub_524890()
        return 0

sub_75a095(7)
breakpoint
