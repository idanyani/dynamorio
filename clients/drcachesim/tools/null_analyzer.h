#ifndef _NULL_ANALYZER_H_
#define _NULL_ANALYZER_H_ 1

#include "analysis_tool.h"

class null_analyzer_t : public analysis_tool_t {
public:
    null_analyzer_t();
    ~null_analyzer_t() override;
    
    bool
    parallel_shard_supported() override;
    void *
    parallel_shard_init(int shard_index, void *worker_data) override;
    bool
    parallel_shard_exit(void *shard_data) override;
    bool
    parallel_shard_memref(void *shard_data, const memref_t &memref) override;
    std::string
    parallel_shard_error(void *shard_data) override;

    bool
    process_memref(const memref_t &memref) override;
    bool
    print_results() override;

protected:
    static const std::string TOOL_NAME;
};

#endif /* _NULL_ANALYZER_H_ */
