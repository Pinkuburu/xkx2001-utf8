//Cracked by Roath
// Npc: /kungfu/class/shaolin/dao-yi.c
// Date: YZC 96/01/19

inherit NPC;

void create()
{
	set_name("道一禅师", ({
		"daoyi chanshi",
		"daoyi",
		"chanshi",
	}));
	set("long",
		"他是一位身材高大的中年僧人，两臂粗壮，膀阔腰圆。他手持兵\n"
		"刃，身穿一袭灰布镶边袈裟，似乎有一身武艺。\n"
	);

	set("gender", "男性");
	set("attitude", "friendly");
	set("class", "bonze");

	set("age", 40);
	set("shen_type", 1);
	set("str", 20);
	set("int", 20);
	set("con", 20);
	set("dex", 20);
	set("max_qi", 500);
	set("max_jing", 300);
	set("neili", 450);
	set("max_neili", 450);
	set("jiali", 40);
	set("combat_exp", 60000);
	set("score", 100);

	set_skill("force", 50);
	set_skill("hunyuan-yiqi", 50);
	set_skill("dodge", 50);
	set_skill("shaolin-shenfa", 50);
	set_skill("cuff", 50);
	set_skill("luohan-quan", 50);
	set_skill("parry", 50);
	set_skill("staff", 50);
        set_skill("pudu-zhang", 50);
	set_skill("buddhism", 50);
	set_skill("literate", 50);

	map_skill("force", "hunyuan-yiqi");
	map_skill("dodge", "shaolin-shenfa");
	map_skill("cuff", "luohan-quan");
	map_skill("parry", "pudu-zhang");
        map_skill("staff", "pudu-zhang");

	prepare_skill("cuff", "luohan-quan");

	create_family("少林派", 39, "弟子");

	setup();

        carry_object("/clone/weapon/chanzhang")->wield();
        carry_object("/d/shaolin/obj/dao-cloth")->wear();
}



