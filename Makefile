.PHONY: clean All

All:
	@echo "----------Building project:[ make_game - Debug ]----------"
	@cd "make_game" && "$(MAKE)" -f  "make_game.mk"
clean:
	@echo "----------Cleaning project:[ make_game - Debug ]----------"
	@cd "make_game" && "$(MAKE)" -f  "make_game.mk" clean
