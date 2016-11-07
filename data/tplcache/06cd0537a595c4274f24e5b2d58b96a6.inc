
                    [field:array runphp='yes']
                    global $dsql;
                    @me =@me['id'];
                    $sql = "select * from #@__arctype where id=1";    /*顶级栏目id
                    $dsql->Execute('a',$sql);
                    $one = $dsql->GetArray('a');
                    @me =substr(Html2Text($one['content']),0,660);
                    [/field:array]... 
