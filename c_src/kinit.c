#include <erl_nif.h>

static ERL_NIF_TERM kinit(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[]) {
    return enif_make_atom(env, "true");
}

int noop(ErlNifEnv* env, void** priv_data, void** old_priv_data, ERL_NIF_TERM load_info) {
    return 0;
}

static ErlNifFunc nif_funcs[] = {
    {"kinit", 2, kinit}
};

ERL_NIF_INIT(rabbit_auth_backend_kerberos, nif_funcs, NULL, NULL, noop, NULL)
