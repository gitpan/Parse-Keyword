/* DO NOT EDIT -- generated by Devel::CallParser version 0.001 */
#ifndef C8K61oRQKxigiqmUlVdk_INCLUDED_callparser1
#define C8K61oRQKxigiqmUlVdk_INCLUDED_callparser1 1
#ifndef PERL_VERSION
 #error you must include perl.h before callparser1.h
#elif !(PERL_REVISION == 5 && PERL_VERSION == 18 && PERL_SUBVERSION == 0)
 #error this callparser1.h is for Perl 5.18.0 only
#endif /* Perl version mismatch */
PERL_CALLCONV OP * C8K61oRQKxigiqmUlVdk_pac0(pTHX_ U32 *);
#define Perl_parse_args_parenthesised C8K61oRQKxigiqmUlVdk_pac0
#define parse_args_parenthesised(fp) Perl_parse_args_parenthesised(aTHX_ fp)
PERL_CALLCONV OP * C8K61oRQKxigiqmUlVdk_paz0(pTHX_ U32 *);
#define Perl_parse_args_nullary C8K61oRQKxigiqmUlVdk_paz0
#define parse_args_nullary(fp) Perl_parse_args_nullary(aTHX_ fp)
PERL_CALLCONV OP * C8K61oRQKxigiqmUlVdk_pau0(pTHX_ U32 *);
#define Perl_parse_args_unary C8K61oRQKxigiqmUlVdk_pau0
#define parse_args_unary(fp) Perl_parse_args_unary(aTHX_ fp)
PERL_CALLCONV OP * C8K61oRQKxigiqmUlVdk_pal0(pTHX_ U32 *);
#define Perl_parse_args_list C8K61oRQKxigiqmUlVdk_pal0
#define parse_args_list(fp) Perl_parse_args_list(aTHX_ fp)
PERL_CALLCONV OP * C8K61oRQKxigiqmUlVdk_pab0(pTHX_ U32 *);
#define Perl_parse_args_block_list C8K61oRQKxigiqmUlVdk_pab0
#define parse_args_block_list(fp) Perl_parse_args_block_list(aTHX_ fp)
PERL_CALLCONV OP * C8K61oRQKxigiqmUlVdk_pap0(pTHX_ GV *, SV *, U32 *);
#define Perl_parse_args_proto C8K61oRQKxigiqmUlVdk_pap0
#define parse_args_proto(gv, sv, fp) Perl_parse_args_proto(aTHX_ gv, sv, fp)
PERL_CALLCONV OP * C8K61oRQKxigiqmUlVdk_pan0(pTHX_ GV *, SV *, U32 *);
#define Perl_parse_args_proto_or_list C8K61oRQKxigiqmUlVdk_pan0
#define parse_args_proto_or_list(gv, sv, fp) Perl_parse_args_proto_or_list(aTHX_ gv, sv, fp)
typedef OP *(*Perl_call_parser)(pTHX_ GV *, SV *, U32 *);
#define CALLPARSER_PARENS    0x00000001
#define CALLPARSER_STATEMENT 0x00000002
PERL_CALLCONV void C8K61oRQKxigiqmUlVdk_gcp1(pTHX_ CV *, Perl_call_parser *, SV **);
#define Perl_cv_get_call_parser C8K61oRQKxigiqmUlVdk_gcp1
#define cv_get_call_parser(cv, fp, op) Perl_cv_get_call_parser(aTHX_ cv, fp, op)
PERL_CALLCONV void C8K61oRQKxigiqmUlVdk_scp1(pTHX_ CV *, Perl_call_parser, SV *);
#define Perl_cv_set_call_parser C8K61oRQKxigiqmUlVdk_scp1
#define cv_set_call_parser(cv, f, o) Perl_cv_set_call_parser(aTHX_ cv, f, o)
#endif /* !C8K61oRQKxigiqmUlVdk_INCLUDED_callparser1 */
