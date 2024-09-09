auto f = [](params)
{
    Statements;
};
 
// Pass f and its parameters to thread
// object constructor as
std::thread thread_object(f, params);