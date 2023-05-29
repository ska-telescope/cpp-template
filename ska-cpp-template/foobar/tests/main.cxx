import boost.ut;

int main() {
    namespace ut = boost::ut;
    
    return ut::cfg<ut::override>.run({
        // .filter = "test.section.*",
        // .tag = {"nightly"},
        // .colors = { .none = "" },
        // .dry_run = false,
        .report_errors = true
    });
}
