#include <iostream>

#include "null_analyzer.h"
#include "../common/utils.h"

const std::string null_analyzer_t::TOOL_NAME = "Null analysis tool";

analysis_tool_t *
null_analyzer_tool_create()
{
    return new null_analyzer_t();
}

null_analyzer_t::null_analyzer_t()
{
}

null_analyzer_t::~null_analyzer_t()
{
}

bool
null_analyzer_t::parallel_shard_supported()
{
    return true;
}

void *
null_analyzer_t::parallel_shard_init(int shard_index, void *worker_data)
{
    return nullptr;
}

bool
null_analyzer_t::parallel_shard_exit(void *shard_data)
{
    return true;
}

std::string
null_analyzer_t::parallel_shard_error(void *shard_data)
{
    return "ERROR";
}

bool
null_analyzer_t::parallel_shard_memref(void *shard_data, const memref_t &memref)
{
    return true;
}

bool
null_analyzer_t::process_memref(const memref_t &memref)
{
    return true;
}

bool
null_analyzer_t::print_results()
{
    std::cerr << "Null analyzer finished\n";

    return true;
}
