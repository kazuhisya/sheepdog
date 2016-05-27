/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKLOGGER_H
#define _MOCKLOGGER_H

#include "logger.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC)
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void Mocklogger_Init(void);
void Mocklogger_Destroy(void);
void Mocklogger_Verify(void);




#define early_log_init_Expect(format_name, user_info) early_log_init_CMockExpect(__LINE__, format_name, user_info)
void early_log_init_CMockExpect(UNITY_LINE_TYPE cmock_line, const char* format_name, struct logger_user_info* user_info);
#define log_init_ExpectAndReturn(progname, type, level, outfile, cmock_retval) log_init_CMockExpectAndReturn(__LINE__, progname, type, level, outfile, cmock_retval)
void log_init_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const char* progname, enum log_dst_type type, int level, char* outfile, int cmock_to_return);
#define log_close_Expect() log_close_CMockExpect(__LINE__)
void log_close_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define dump_logmsg_Expect(cmock_arg1) dump_logmsg_CMockExpect(__LINE__, cmock_arg1)
void dump_logmsg_CMockExpect(UNITY_LINE_TYPE cmock_line, void* cmock_arg1);
#define log_write_Expect(prio, func, line, fmt) log_write_CMockExpect(__LINE__, prio, func, line, fmt)
void log_write_CMockExpect(UNITY_LINE_TYPE cmock_line, int prio, const char* func, int line, const char* fmt);
#define set_thread_name_Expect(name, show_idx) set_thread_name_CMockExpect(__LINE__, name, show_idx)
void set_thread_name_CMockExpect(UNITY_LINE_TYPE cmock_line, const char* name, bool show_idx);
#define get_thread_name_Expect(name) get_thread_name_CMockExpect(__LINE__, name)
void get_thread_name_CMockExpect(UNITY_LINE_TYPE cmock_line, char* name);
#define __sd_dump_variable_ExpectAndReturn(var, cmock_retval) __sd_dump_variable_CMockExpectAndReturn(__LINE__, var, cmock_retval)
void __sd_dump_variable_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const char* var, int cmock_to_return);
#define sd_backtrace_Expect() sd_backtrace_CMockExpect(__LINE__)
void sd_backtrace_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define set_loglevel_Expect(new_loglevel) set_loglevel_CMockExpect(__LINE__, new_loglevel)
void set_loglevel_CMockExpect(UNITY_LINE_TYPE cmock_line, int new_loglevel);
#define get_loglevel_ExpectAndReturn(cmock_retval) get_loglevel_CMockExpectAndReturn(__LINE__, cmock_retval)
void get_loglevel_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);

#endif