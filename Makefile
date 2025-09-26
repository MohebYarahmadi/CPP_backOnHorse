.PHONY: clean All

All:
	@echo "----------Building project:[ told_you_once - Debug ]----------"
	@cd "told_you_once" && "$(MAKE)" -f  "told_you_once.mk"
clean:
	@echo "----------Cleaning project:[ told_you_once - Debug ]----------"
	@cd "told_you_once" && "$(MAKE)" -f  "told_you_once.mk" clean
